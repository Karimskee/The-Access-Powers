#include "DataBaseManager.h"    // Includes classes, functions, declarations and essential libraries

// Global variables (can be used in any function without passing them)
const double avgDailyConsPerson = 0.22; // Average daily water consumption per person in m³ (based on CAPMAS)
int flatMembers = rand(2, 5);   // Number of family individuals (the value is a random number between 2 and 5 inclusive)
                                // 1 family per water meter
                                // Gets updated for each row
const QDate date = QDate::currentDate();    // Today's date
const int day = date.day();                 // Today's day as a number
const int month = date.month();             // Today's month as a number
const int year = date.year();               // Today's year as a number
// Billing bracket
// Formula for monthly bill = monthly consumtion * corresponding bracket value
// for example, if monthly consumption = 15 -> monthly bill = 15 * 1.6
// each vector element is divided to: begin consumption in m³, end consumption in m³, value per in LE
const vector <bracket> brackets = {{0, 10, 0.65}, {11, 20, 1.6}, {21, 30, 2.25}, {31, 40, 2.75}, {41, LLONG_MAX, 3.15}};
row recordData; // Stores needed fields (attributes) values, ctrl + left click on "row" for more details
vector <building> buildings;

// Connect to the local database
bool DataBaseManager::connect()
{
    QString dbPath = QCoreApplication::applicationDirPath() + "/Database.accdb";

    db = QSqlDatabase::addDatabase("QODBC");

    QString connStr = "Driver={Microsoft Access Driver (*.mdb, *.accdb)};DBQ=" + dbPath;
    db.setDatabaseName(connStr);

    if (!db.open())
    {
        qDebug() << "[ERROR] Failed to connect to the database:";
        qDebug() << db.lastError().text();
        return false;
    }

    qDebug() << "[SUCCESS] Connected to the database!";
    return true;
}

// Reset the whole database (no rows)
bool DataBaseManager::reset()
{
    if (!db.isOpen())
    {
        qDebug() << "[ERROR] Database is not open.";
        return false;
    }

    QSqlQuery query(db);

    // Delete tables, child tables first (if table a <- many to one -> table b, table b is a child of table a)
    QStringList deleteOrder =
    {
        "Alerts",
        "Water Meters",
        "Buildings",
    };

    for (const QString& table : deleteOrder)
    {
        QString del = "DELETE FROM [" + table + "]";
        if (!query.exec(del))
        {
            qDebug() << "[ERROR] Failed to clear table" << table << ":" << query.lastError().text();
            return false;
        }
    }

    qDebug() << "[SUCCESS] All tables have been cleared.";
    return true;
}

// Random data generator and insertor
bool generator(ll n, ll m)
{
    // Potential update: add verification
    buildingsGenerator(m);
    metersGenerator(n);
    return true;
}

bool metersGenerator(ll n)
{
    QSqlQuery lastRowQuery; // Assume some rows already exist, we start from the last row
    lastRowQuery.prepare("SELECT MAX(WaterMeterID) FROM [Water Meters]");   // Prepare the last row selection command

    if (lastRowQuery.exec() && lastRowQuery.next())     // Execute the selection command
    {
        ll startID = 1; // Water meter ID to start generating from
        QString base = "0000000000";    // Base value for the water meter ID

        QString lastID = "";    // Last water meter ID that exists in the table
        lastID = lastRowQuery.value(0).toString();

        // Set startID
        if (!lastID.isEmpty())
            startID = lastID.right(base.size()).toLongLong() + 1;

        QSqlQuery query;       // Water meters insertion query

        // Prepare insertion to all Fields
        // The strings in VALUES e.g. ":id" are just placeholders, so that we can set the actual values later in the code
        query.prepare
            (R"(
            INSERT INTO [Water Meters]
            (
                WaterMeterID,
                Balance,
                "DailyConsumption m³",
                "WeeklyConsumption m³",
                MonthlyBill,
                BillingBracket,
                "MonthlyConsumption m³",
                LastRechargeDate,
                "LastMonthConsumption m³",
                LegalName,
                PhoneNumber,
                buildingID,
                JanuaryBill,
                FebruaryBill,
                MarchBill,
                AprilBill,
                MayBill,
                JuneBill,
                JulyBill,
                AugustBill,
                SeptemberBill,
                OctoberBill,
                NovemberBill,
                DecemberBill,
                "LastYearAverage m³"
            )
            VALUES
            (
                :id,
                :bal,
                :dailyCons,
                :weeklyCons,
                :monthlyBill,
                :billingBrack,
                :monthlyCons,
                :lRecharge,
                :lmonthCons,
                :name,
                :phone,
                :building,
                :janBill,
                :febBill,
                :marBill,
                :aprBill,
                :mayBill,
                :junBill,
                :julBill,
                :augBill,
                :sepBill,
                :octBill,
                :novBill,
                :decBill,
                :lYearAvg
            )
        )");

        // For the number of rows to add
        for (int i = startID; i < startID + n; i++)
        {
            flatMembers = rand(2, 5); // Update the number of members for each flat (row)

            if // Bind values to placeholders and execute the query (command)
            (
                !waterMeterID(query, n, i, base) ||
                !balance(query, n) ||
                !dailyConsumption(query, n) ||
                !lastRechargeDate(query, n) ||
                !legalName(query, n, i) ||
                !phoneNumber(query, n) ||
                !associatedBuildingID(query, n) ||
                !consumptions(query) ||
                !query.exec()
            )
            {
                // If insertion goes wrong
                qDebug() << "[ERROR] Meters insertion error encountered: " << query.lastError().text();
                return false;
            }
        }

        // If insertion goes right
        qDebug() << "[SUCCESS] Meters inserted successfully!";
        return true;
    }
    else
    {
        // If selection goes wrong
        qDebug() << "[ERROR] Meters selection error encountered: " << lastRowQuery.lastError().text();
        return false;
    }
}

bool buildingsGenerator(ll m)
{
    // Add previous buildings to the vector
    QSqlQuery previousBDQuery("SELECT * FROM Buildings");

    while (previousBDQuery.next())
    {
        buildings.push_back
        ({
            previousBDQuery.value("BuildingID").toString(),
            previousBDQuery.value("NumberOfMeters").toInt(),
            previousBDQuery.value("MonthlyConsumption m³").toDouble()
        });
    }

    QSqlQuery lastRowQuery; // Assume some rows already exist, we start from the last row
    lastRowQuery.prepare("SELECT MAX(buildingID) FROM Buildings");   // Prepare the last row selection command

    if (lastRowQuery.exec() && lastRowQuery.next())     // Execute the selection command
    {
        ll startID = 1; // Building ID to start generating from
        QString base = "0000000000";    // Base value for the Building ID

        QString lastID = "";    // Last Building ID that exists in the table
        lastID = lastRowQuery.value(0).toString();

        // Set startID
        if (!lastID.isEmpty())
            startID = lastID.right(base.size()).toLongLong() + 1;

        // For the number of rows to add
        for (int i = startID; i < startID + m; i++)
        {
           !buildingID(i, base);   // Call before associatedBuildingID
        }
    }
    else
    {
        // If selection goes wrong
        qDebug() << "[ERROR] Buildings selection error encountered: " << lastRowQuery.lastError().text();
        return false;
    }

    return true;
}

bool alertsGenerator()
{
    return true;
}

// Bind Water Meter IDs
bool waterMeterID(QSqlQuery& query, ll n, ll id, QString base)
{
    QString prefix = "EGPWM-";  // Water Meter ID prefix (imaginary, not IRL)

    base = QString::number(id).rightJustified(base.size(), '0');    // From 15 to 0000000015
    QString syntax = prefix + base;

    query.bindValue(":id", syntax);
    recordData.id = syntax;

    return true;
}

// Bind Balance
bool balance(QSqlQuery& query, ll n)
{
    double bal = rand(0, 400);  // Fully random

    query.bindValue(":bal", bal);
    recordData.bal = bal;

    return true;
}

// Bind Daily consumption
bool dailyConsumption(QSqlQuery& query, ll n)
{
    // A close value to expected average consumption for the whole flat based on avgDailyConsPerson
    double dailyCons = avgDailyConsPerson * (flatMembers * (rand(70, 130) / 100.0));

    query.bindValue(":dailyCons", dailyCons);
    recordData.dailyCons = dailyCons;

    return true;
}

// Bind Last Recharge Date
bool lastRechargeDate(QSqlQuery& query, ll n)
{
    QDate lDate = date.addDays(-1 * rand(0, 30));   // Last Recharge is assumed to be in the last 30 days

    query.bindValue(":lRecharge", lDate.toString("M/d/yyyy"));
    recordData.lRecharge = lDate;

    return true;
}

// Bind Phone Number
bool phoneNumber(QSqlQuery& query, ll n)
{
    QString prefix = "01";  // Fixed
    QString carrier = "0";  // 0 or 1 or 2 or 5
    QString base = "00000000";

    char carriers[4] = {'0', '1', '2', '5'};
    carrier[0] = carriers[rand(0, 3)];

    // Numbers are fully random (duplication may happen)
    for (auto& it : base)
        it = (char) (rand(0, 9) + '0');

    QString phone = prefix + carrier + base;

    query.bindValue(":phone", phone);
    recordData.phone = phone;

    return true;
}

// Bind Legal Name
bool legalName(QSqlQuery& query, ll n, ll id)
{
    // Got no flippin idea how to implement this properly without inserting a heck of a file of all valid names in the world
    QString prefix = "Test Subject #";
    QString number = QString::number(id);
    QString name = prefix + number;

    query.bindValue(":name", name);
    recordData.name = name;

    return true;
}

bool buildingID(ll id, QString base)
{
    QString prefix = "EGPBD-";
    QString number = QString::number(id).rightJustified(base.size(), '0');
    QString syntax = prefix + number;

    buildings.push_back({syntax, 0});

    // query.bindValue(":id", syntax);

    return true;
}

// Bind building IDs
bool associatedBuildingID(QSqlQuery& query, ll n)
{
    // Randomize buildings first (hopefully i get time to (i won't (i hope (;D))))
    ll randomBuildingIndex = rand(0, buildings.size() - 1);
    QString buildingID = "";

    if (buildings.size())
    {
        buildingID = buildings[randomBuildingIndex].id;
        buildings[randomBuildingIndex].count++;
    }

    buildings[randomBuildingIndex].monthlyCons += recordData.lMonthCons;

    query.bindValue(":building", buildingID);

    addBuildings();

    return true;
}

void addBuildings()
{
    QSqlQuery query;    // Buildings insertion query

    // Prepare insertion to all Fields
    // The strings in VALUES e.g. ":id" are just placeholders, so that we can set the actual values later in the code
    for (auto it : buildings)
    {
        query.prepare
            (R"(
            INSERT INTO Buildings
            (
                BuildingID
            )
            VALUES
            (
                :id
            )
        )");

        query.bindValue(":id", it.id);
        // query.bindValue(":metersN", it.count);
        // query.bindValue(":monthlyCons", it.monthlyCons);

        if (!query.exec())
            qDebug() << "[ERROR] Buildings insertion error encountered:" << query.lastError().text();
    }
}

// Bind:
// Monthly Bill, Billing Bracket, Monthly Consumption, Last Month Consumption, Jan-Dec Bills, Last Year Average
bool consumptions(QSqlQuery& query)
{
    int daysFromLRecharge = recordData.lRecharge.daysTo(date) + 1;  // Current date - last recharge date = num of days

    double monthlyCons = 0;
    double weeklyCons = 0;

    // For the number of days from the last recharge
    for (int i = 1; i <= daysFromLRecharge; i++)
    {
        // Calculate consumption for the whole current month
        double dailyCons = recordData.dailyCons * (rand(70, 130) / 100.0);;
        monthlyCons += dailyCons;

        // Calculate cosumption for the last 7 days
        if (i >= daysFromLRecharge - min(7, daysFromLRecharge) + 1)
            weeklyCons += dailyCons;
    }

    recordData.weeklyCons = weeklyCons;
    recordData.monthlyCons = monthlyCons;

    double currentMonthBill = monthlyCons;

    for (auto it : brackets)
        if (monthlyCons >= it.begin && monthlyCons <= it.end) // If is in bracket range
        {
            currentMonthBill *= it.value;
            recordData.billingBrack = it.value;
            break;
        }

    // Prepare for calculating previous months
    QDate currDate = date;
    QString currMonth = date.toString("MMMM").left(3);
    currMonth[0] = currMonth[0].toLower();

    // Bind values
    query.bindValue(":monthlyBill", currentMonthBill);
    query.bindValue(":" + currMonth + "Bill", currentMonthBill);
    query.bindValue(":weeklyCons", weeklyCons);
    query.bindValue(":monthlyCons", monthlyCons);
    query.bindValue(":billingBrack", recordData.billingBrack);
    recordData.monthlyBill = currentMonthBill;

    // Calculate previous 11 months
    for (int i = 1; i <= 11; i++)
    {
        // Get the previous month name
        currDate = currDate.addMonths(-1);
        currMonth = currDate.toString("MMMM");

        monthlyCons *= (rand(80, 120) / 100.0); // Calculate monthly consumption

        for (auto it : brackets)
            if (monthlyCons >= it.begin && monthlyCons <= it.end)   // If in bracket range
            {
                currentMonthBill = monthlyCons * it.value;
                break;
            }

        if (i == 1) // Calculate and bind last month consumption
        {
            query.bindValue(":lMonthCons", monthlyCons);
            recordData.lMonthCons = monthlyCons;
        }

        currMonth[0] = currMonth[0].toLower();  // January -> january
        QString placeHolder = ":" + currMonth.left(3) + "Bill";   // january -> :janBill (placeholder)
        query.bindValue(placeHolder, currentMonthBill);
    }

    // Calculate last year average
    double sum = 0;
    for (int i = 1; i <= 12; i++)   // For last year's months
    {
        monthlyCons *= (rand(80, 120) / 100.0);
        sum += monthlyCons;
    }

    double lYearAvg = sum / 12;

    query.bindValue(":lYearAvg", lYearAvg);

    return true;
}

// Returns random number between a and b inclusive
ll rand(ll a, ll b)
{
    return a + rand() % (b - a + 1);
}

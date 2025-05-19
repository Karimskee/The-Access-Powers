#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
using ll = long long;

#include <QString>
#include <QCoreApplication>
#include <QSqlError>
#include <QDebug>
#include <string>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <sstream>
#include <random>
#include <QDate>

using namespace std;

class DataBaseManager
{
public:
    bool connect();
    bool reset();

private:
    QSqlDatabase db;
};

// You can think of a struct as a group of variables wrapped in single variable
struct row
{
    QString id;             // Water meter ID
    double bal;             // Current balance in LE
    double dailyCons;       // Current day's consumption in m³
    double weeklyCons;      // This week's consumption in m³
    double monthlyBill;     // Current month's Bill in LE
    double billingBrack;    // Current month's billing bracket in LE
    double monthlyCons;     // Current month's consumption in m³
    QDate lRecharge;        // Last recharge date
    double lMonthCons;      // Last month's consumption in m³
    QString name;           // Associated legal name to the water meter
    QString phone;          // Associated phone number to the water meter
    QString building;       // Associated building ID to the water meter
};

/**
 * @brief Puts random values into the Database
 * @param Num_of_values_to_insert
 * @return true if successful insertion, false if otherwise
 */
bool generator(ll n, ll m);
bool metersGenerator(ll n);
bool buildingsGenerator(ll m);

bool waterMeterID(QSqlQuery& query, ll n, ll id, QString base);
bool balance(QSqlQuery& query, ll n);
bool dailyConsumption(QSqlQuery& query, ll n);
bool lastRechargeDate(QSqlQuery& query, ll n);
bool legalName(QSqlQuery& query, ll n, ll id);
bool phoneNumber(QSqlQuery& query, ll n);
bool buildingID(ll id, QString base);
bool associatedBuildingID(QSqlQuery& query, ll n);
void addBuildings();
bool consumptions(QSqlQuery& query);

bool clearDatabase(QSqlDatabase& db);

ll rand(ll a, ll b); // Returns random value between the given interval (inclusive)

struct bracket
{
    ll begin; // Start of bracket range in m³
    ll end; // End of bracket range in m³
    double value; // Billing bracket value in LE
};

struct building
{
    QString id = ""; // Building ID
    ll count = 0;   // Water meters number per building
    double monthlyCons = 0; // Monthly building consumption
};

#endif // DATABASEMANAGER_H

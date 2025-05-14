/****************************************************************************************/
/*                                    Pre-Processing                                    */
/****************************************************************************************/

#include <bits/stdc++.h>
#include "nanodbc-main\nanodbc\nanodbc.h"
#define PI 3.14159265359
#define resetColor "\033[0m\n"  // Reset terminal color
using namespace nanodbc;
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

/****************************************************************************************/
/*                                Functions Declaration                                 */
/****************************************************************************************/



void space(ll n);   // Print n blank lines (for better program interface purpose)
void clear();   // Clears terminal

/**
 * @brief Terminal coloring
 *
 * @details
 * Usage:
 * color(#FF0000); Red coloring
 * color(#FFFFFF); Reset to white color
 *          
 * @param HEX_Color
 * @return The build in coloring command
 */
string color(const std::string& hex);   // ANSI terminal color set

/**
 * @brief Puts random values into the Database
 * @param Num_of_values_to_insert
 * @return 
 */
void generator(ll n, connection conn);

ll rand(ll a, ll b); // Returns random value between the given interval (inclusive)


/**************************************************************************** */
/* ┌────────────────────────────────────────────────────────────────────────┐ */
/* │                                                                        │ */
/* │                                                                        │ */
/* │     ████████╗██╗  ██╗███████╗                                          │ */
/* │     ╚══██╔══╝██║  ██║██╔════╝                                          │ */
/* │        ██║   ███████║█████╗                                            │ */
/* │        ██║   ██╔══██║██╔══╝                                            │ */
/* │        ██║   ██║  ██║███████╗                                          │ */
/* │        ╚═╝   ╚═╝  ╚═╝╚══════╝                                          │ */
/* │                                                                        │ */
/* │      █████╗  ██╗ ██████╗      ██╗  ██████╗███████╗███████╗███████╗     │ */
/* │     ██╔══██╗██╔╝██╔════╝      ╚██╗██╔════╝██╔════╝██╔════╝██╔════╝     │ */
/* │     ███████║██║ ██║█████╗█████╗██║██║     █████╗  ███████╗███████╗     │ */
/* │     ██╔══██║██║ ██║╚════╝╚════╝██║██║     ██╔══╝  ╚════██║╚════██║     │ */
/* │     ██║  ██║╚██╗╚██████╗      ██╔╝╚██████╗███████╗███████║███████║     │ */
/* │     ╚═╝  ╚═╝ ╚═╝ ╚═════╝      ╚═╝  ╚═════╝╚══════╝╚══════╝╚══════╝     │ */
/* │                                                                        │ */
/* │     ██████╗  ██████╗ ██╗    ██╗███████╗██████╗ ███████╗                │ */
/* │     ██╔══██╗██╔═══██╗██║    ██║██╔════╝██╔══██╗██╔════╝                │ */
/* │     ██████╔╝██║   ██║██║ █╗ ██║█████╗  ██████╔╝███████╗                │ */
/* │     ██╔═══╝ ██║   ██║██║███╗██║██╔══╝  ██╔══██╗╚════██║                │ */
/* │     ██║     ╚██████╔╝╚███╔███╔╝███████╗██║  ██║███████║                │ */
/* │     ╚═╝      ╚═════╝  ╚══╝╚══╝ ╚══════╝╚═╝  ╚═╝╚══════╝                │ */
/* │                                                                        │ */
/* │                                                                        │ */
/* └────────────────────────────────────────────────────────────────────────┘ */
/**************************************************************************** */

/**
 * Main program
 */

int main()
{
    clear();

    try
    {
        // Connecting to DataBase
        auto conn = connection
        (
            "Driver={Microsoft Access Driver (*.mdb, *.accdb)};"
            "DBQ=Database_v0.1.accdb;"
        );
        generator(10, conn);

        cout << color("#00FF00") << "🥲 Inserted successfully." << endl;
    }

    // Connection error 
    catch (const exception& e)
        { cerr << color("#FF0000") << "🧐 Error: " << e.what() << endl; }
    catch (...)
        { cerr << color("#FF0000") << "Unknown error has occurred 😭" << endl; }
}

/****************************************************************************************/
/*                                 Functions Definitions                                */
/****************************************************************************************/

void space(ll n)
{
    for (int i = 0; i < n; i++)
        cout << endl;
}

void clear()
{
    const char* wslEnv = std::getenv("WSLENV");

    if (wslEnv)
        system("clear");
    else
        system("cls");
}

string color(const string& hex)
{
    int r, g, b;
    if (hex[0] == '#')
    {
        stringstream ss;
        ss << hex << hex.substr(1);
        int rgb;
        ss >> rgb;
        r = (rgb >> 16) & 0xFF;
        g = (rgb >> 8) & 0xFF;
        b = rgb & 0xFF;
    }
    else
    {
        return "";  // Invalid input
    }

    ostringstream ansi;
    ansi << "\033[38;2;" << r << ";" << g << ";" << b << "m";
    return ansi.str();
}

void generator(ll n, connection conn)
{
    // Water Meters IDs
    string syntax = "EGP-0000000000";

    for (int i = 0; i <= 9999999999; i++)
    {
        string suffix = to_string(i);
        for (int i = suffix.size() - 1, j = syntax.size() - 1; i >= 0; i--, j--)
            syntax[j] = suffix[i];
        
        string query = "(INSERT INTO [Water Meters] (ID) VALUES ('{" + syntax + "}'))";
        execute(conn, query);
    }
}

ll rand(ll a, ll b)
{
    return a + rand() % (b - a + 1);
}

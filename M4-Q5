/******************************************************************************
EXERCISE Q05- Conference Seating Planner [Hard]
1. Start
2. Enter numAttendees, seatsPerTable
3. Compute exactTables = double(numAttendees) / seatsPerTable
    Compute tablesRequired = ceil(exactTables)
    Compute totalAvailableSeats = tablesRequired * seatsPerTable
    Compute unusedSeats = totalAvailableSeats - numAttendees
    Display exactTables, tablesRequired, unusedSeats
4. End
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int numAttendees, seatsPerTable;

    // Read inputs
    cout << "Enter number of attendees: ";
    cin >> numAttendees;

    cout << "Enter seats per table: ";
    cin >> seatsPerTable;

    double exactTables = static_cast<double>(numAttendees) / seatsPerTable; 
    int tablesRequired = static_cast<int>(ceil(exactTables));
    int totalAvailableSeats = tablesRequired * seatsPerTable;
    int unusedSeats = totalAvailableSeats - numAttendees;

    cout << fixed << setprecision(2);
    cout << "\n--- Seating Arrangement ---" << endl;
    cout << "Exact Tables Needed: " << exactTables << endl;
    cout << "Tables Required: " << tablesRequired << endl;
    cout << "Unused Seats: " << unusedSeats << endl;

    return 0;
}

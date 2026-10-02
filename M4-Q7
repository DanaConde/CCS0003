/******************************************************************************
EXERCISE Q07- Emergency Drone Distance Calculator [Hard]
1. Start
2. Enter x1, y1, x2, y2
3. Compute dx = x2 - x1
    Compute dy = y2 - y1
    Compute distance = √pow(dx,2) + (pow(dy,2)
    Compute roundedDistance = round(distance)
    Display dx, dy, distance, roundedDistance
4. End
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2;

    cout << "Enter x1: ";
    cin >> x1;
    
    cout << "Enter y1: ";
    cin >> y1;

    cout << "Enter x2: ";
    cin >> x2;
    
    cout << "Enter y2: ";
    cin >> y2;
    
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(pow(dx,2) + pow(dy,2));
    int roundedDistance = static_cast<int>(round(distance));

    cout << fixed << setprecision(3);
    cout << "\n--- Distance Calculation ---" << endl;
    cout << "dx: " << dx << endl;
    cout << "dy: " << dy << endl;
    cout << "Exact Distance: " << distance << endl;
    cout << "Rounded Distance: " << roundedDistance << endl;
    
    return 0;
}

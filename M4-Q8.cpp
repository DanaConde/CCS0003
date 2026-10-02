/******************************************************************************
EXERCISE Q08- Environmental Sensor Summary  [Hard]
1. Start
2. Enter temp1, temp2, temp3 
3. Compute avergae = (temp1 + temp2 + temp3) / 3.0
    Compute absDiff = fabs (temp1 - temp3)
    Compute floorVal = floor(average)
    Compute ceilVal = ceil(average)
    Compute truncVal = trunc(average)
    Compute roundVal = round(average)
    Display average, absDiff, floorVal, ceilVal, truncVal,roundVal
4. End
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double temp1, temp2, temp3;

    cout << "Enter first temperature reading: ";
    cin >> temp1;
    
    cout << "Enter second temperature reading: ";
    cin >> temp2;
    
    cout << "Enter third temperature reading: ";
    cin >> temp3;
    
    double average = (temp1 + temp2 + temp3) / 3.0;
    double absDiff = fabs(temp1 - temp3);

    double floorVal = floor(average);
    double ceilVal = ceil(average);
    double truncVal = trunc(average);
    double roundVal = round(average);

    cout << fixed << setprecision(3);
    cout << "\n--- Temperature Statistics ---" << endl;
    cout << "Average Temperature: " << average << endl;
    cout << "Absolute Difference (T1 vs T3): " << absDiff << endl;
    cout << "floor(average): " << floorVal << endl;
    cout << "ceil(average): " << ceilVal << endl;
    cout << "trunc(average): " << truncVal << endl;
    cout << "round(average): " << roundVal << endl;
    
    return 0;
}

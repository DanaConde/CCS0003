/******************************************************************************
EXERCISE Q01-Campus Canteen Group Order [Medium]
CASE 1
1. Start
2. Enter mealPrice, quantity, serviceCharge, numStudents
3. Compute subtotal = price x quantity
4. Compute serviceCharge = subtotal * (serviceChargeRate / 100.0)
    finalBill = baseAmt * serviceCharge
    sharePerStudent = finalBill / numStudents
    Display moneyValues
5. End
*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double mealPrice;
    int quantity;
    double serviceChargeRate;
    int numStudents;

    cout << "Enter meal price: ";
    cin >> mealPrice;

    cout << "Enter quantity ordered: ";
    cin >> quantity;
    
    cout << "Enter servicecharge percentage: ";
    cin >> serviceChargeRate;
    
    cout << "Enter number of students sharing the bill: ";
    cin >> numStudents;
    
    double subtotal = mealPrice * quantity;
    double serviceCharge = subtotal * (serviceChargeRate / 100.0);
    double finalBill = subtotal + serviceCharge;
    double sharePerStudent = finalBill / numStudents;
    
    cout << fixed << setprecision(2);
    cout << "\n--- Bill Summary ---" << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Service Charge: " << serviceCharge << endl;
    cout << "Final Bill: " << finalBill << endl;
    cout << "Share per Student: " << sharePerStudent << endl;
    
    return 0;
}

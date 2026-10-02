/******************************************************************************
EXERCISE Q03- Ride-Sharing Fare Split  [Medium]
1. Start
2. Enter baseFare, distance (km), ratePerKm, tollFee, bookingFeeRate, numPassengers
3. Compute distanceCharge = distance x ratePerKm
    Compute preFeeTotal = baseFare + distanceCharge + tollFee
    Compute bookingFee = preFeeTotal * (bookingFeeRate/100.0)
    Compute grandTotal = preFeeTotal + bookingFee
    Compute shareperpassenger = grandTotal/numPassengers
    Display distanceCharge, preFeeTotal, bookingFee, grandTotal, sharePerPassenger
4. End
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double baseFare, distance, ratePerKm, tollFee, bookingFeeRate;
    int numPassengers;

    cout << "Enter base fare: ";
    cin >> baseFare;

    cout << "Enter distance in kilometers: ";
    cin >> distance;
    
    cout << "Enter rate per kilometer: ";
    cin >> ratePerKm;
    
    cout << "Enter toll fee: ";
    cin >> tollFee;
    
    cout << "Enter booking-fee percentage: ";
    cin >> bookingFeeRate;
    
    cout << "Enter number of passengers: ";
    cin >> numPassengers;
    
    double distanceCharge = distance * ratePerKm;
    double preFeeTotal = baseFare + distanceCharge + tollFee;
    double bookingFee = preFeeTotal * (bookingFeeRate / 100.0);
    double grandTotal = preFeeTotal + bookingFee;
    double sharePerPassenger = grandTotal / numPassengers;
    
    cout << fixed << setprecision(2);
    cout << "\n--- Ride Fare Breakdown ---" << endl;
    cout << "Distance Charge: " << distanceCharge << endl;
    cout << "Pre-Fee Total: " << preFeeTotal << endl;
    cout << "Booking Fee: " << bookingFee << endl;
    cout << "Grand Total: " << grandTotal << endl;
    cout << "Share per Passenger: " << sharePerPassenger << endl;
    
    return 0;
}

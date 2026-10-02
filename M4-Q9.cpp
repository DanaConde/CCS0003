/******************************************************************************
EXERCISE Q09- Tuition Installment Calculator [Hard]
1. Start
2. Enter baseTuition, processingFeePercentage, downPayment, numInstallment
3. Compute processingFee = baseTuition * (processingFeePercentage/100.0)
    Compute adjustedTuition = baseTuition + processingFee
    Compute remainingBalance = adjustedTuition - downpayment
    Compute monthlyInstallment = remainingBalance / numInstallments
    Display processingFee, adjustedTuition, remainingBalance, monthlyInstallment
4. End
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double baseTuition, processingFeePercent, downPayment;
    int numInstallments;

    cout << "Enter base tuition: ";
    cin >> baseTuition;

    cout << "Enter processing-fee percentage: ";
    cin >> processingFeePercent;

    cout << "Enter down-payment amount: ";
    cin >> downPayment;

    cout << "Enter number of monthly installments: ";
    cin >> numInstallments;
    
    double processingFee = baseTuition * (processingFeePercent / 100.0);
    double adjustedTuition = baseTuition + processingFee;
    double remainingBalance = adjustedTuition - downPayment;
    double monthlyInstallment = remainingBalance / numInstallments;

    cout << fixed << setprecision(2);
    cout << "\n--- Tuition Payment Plan ---" << endl;
    cout << "Processing Fee: " << processingFee << endl;
    cout << "Adjusted Tuition: " << adjustedTuition << endl;
    cout << "Remaining Balance: " << remainingBalance << endl;
    cout << "Monthly Installment: " << monthlyInstallment << endl;
    
    return 0;
}

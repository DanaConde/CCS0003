/******************************************************************************
EXERCISE Q010- Online Store Invoice and Shipping Boxes [Hard - Capstone]
1. Start
2. Enter unitPrice, quantity, discountPercent, shippingFeePerBox, unitsPerBox
3. Compute subtotal = unitPrice * quantity
    Compute discountAmount = subtotal * (discountPercent / 100.0)
    Compute discountedTotal = subtotal - discountAmount
    Compute exactBoxes = double(quantity) / unitsPerBox
    Compute boxesRequired = ceil(exactBoxes)
    double shippingTotal = boxesRequired * shippingFeePerBox
    double finalAmountDue = discountedTotal + shippingTotal
    Display productName, subtotal, discountedTotal, exactBoxes, boxesRequired,shippingTotal, finalAmountDue
4. End
*******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string productName;
    double unitPrice, discountPercent, shippingFeePerBox;
    int quantity, unitsPerBox;

    cout << "Enter product name: ";
    getline(cin, productName);

    cout << "Enter unit price: ";
    cin >> unitPrice;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter discount percentage: ";
    cin >> discountPercent;

    cout << "Enter shipping fee per box: ";
    cin >> shippingFeePerBox;

    cout << "Enter units per box: ";
    cin >> unitsPerBox;

    double subtotal = unitPrice * quantity;
    double discountAmount = subtotal * (discountPercent / 100.0);
    double discountedTotal = subtotal - discountAmount;
    
    double exactBoxes = static_cast<double>(quantity) / unitsPerBox;
    int boxesRequired = static_cast<int>(ceil(exactBoxes));
    double shippingTotal = boxesRequired * shippingFeePerBox;
    double finalAmountDue = discountedTotal + shippingTotal;

    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "\t\tPURCHASE RECEIPT" << endl;
    cout << "========================================" << endl;
    cout << "Product Name:\t\t" << productName << endl;
    cout << "Subtotal:\t\t$" << subtotal << endl;
    cout << "Discount Amount:\t-$" << discountAmount << endl;
    cout << "Discounted Total:\t$" << discountedTotal << endl;
    cout << "Exact Boxes Needed:\t" << exactBoxes << endl;
    cout << "Boxes Required:\t\t" << boxesRequired << endl;
    cout << "Shipping Total:\t\t$" << shippingTotal << endl;
    cout << "----------------------------------------" << endl;
    cout << "Final Amount Due:\t$" << finalAmountDue << endl;
    cout << "========================================" << endl;

    return 0;
}

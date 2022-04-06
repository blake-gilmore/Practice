#include <iostream>

using namespace std;

int main()
{
    double originalPrice, taxRate, percentUp, finalPrice, taxAmount, totalAmount;

    cout << "Enter original price: ";
    cin >> originalPrice;
    cout << "Enter the taxRate: ";
    cin >> taxRate;
    cout << "Enter percent up: ";
    cin >> percentUp;

    

    finalPrice = originalPrice + (originalPrice * (taxRate * .01));
    taxAmount = finalPrice * (taxRate * .01);
    totalAmount = finalPrice + taxAmount;

    cout << "Original price: " << originalPrice << endl;
    cout << "Percent marked up: " << percentUp << endl;
    cout << "Selling price: " << finalPrice << endl;
    cout << "Tax Rate: " << taxRate << endl;
    cout << "Tax Amount: " << taxAmount << endl;
    cout << "Total amount: " << totalAmount << endl;


    return 0;
}
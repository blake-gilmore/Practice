#include <iostream>
using namespace std;

double inflateCalc(double priceDiff, double priceBefore);

int main()
{
    double inflationRate = 0.0;
    double priceBefore = 0.0;
    double priceNow = 0.0;
    double priceDiff;
    char newCalc;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do
    {
        cout << "Enter the price of the item one year ago: ";
        cin >> priceBefore;

        cout << "Enter the price of the item now";
        cin >> priceNow;

        priceDiff = priceNow - priceBefore;

        inflationRate = inflateCalc(priceDiff, priceBefore);

        cout << "The inflation Rate over the last two years is %" << inflationRate << endl << endl;

        cout << "Would you like to enter another calculation? (Y/N): ";
        cin >> newCalc;
        cout << endl << endl;

    } while (newCalc != 'N');
    
    
}

double inflateCalc(double priceDiff, double priceBefore)
{
    double inflationRate = priceDiff / priceBefore;
    inflationRate *= 100;

    return inflationRate;
}
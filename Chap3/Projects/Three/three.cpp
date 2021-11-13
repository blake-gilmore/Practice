#include <iostream>
using namespace std;

double inflateCalc(double priceDiff, double priceBefore);
double priceIncrease(double inflationRate, double currentPrice);

int main()
{
    double inflationRatePercent = 0.0;
    double inflationRate;
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

        inflationRatePercent = inflateCalc(priceDiff, priceBefore);
        inflationRate = inflationRatePercent / 100;

        cout << "The inflation Rate over the last two years is %" << inflationRatePercent << endl << endl;

        for (int i = 1; i <= 2; i++)
        {
            priceNow = priceIncrease ( inflationRate, priceNow);

            cout << "After " << i << " years, the cost will increase to $" << priceNow << endl;
        }

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

double priceIncrease(double inflationRate, double currentPrice)
{
    double increasePrice = (inflationRate * currentPrice) + currentPrice;
    return increasePrice;
}

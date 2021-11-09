#include <iostream>
using namespace std;

int main()
{
    double inflation;
    double itemCost;
    double years;

    cout << "What is the cost of the item now in dollars: ";
    cin >> itemCost;

    cout << "How many years will the item be purchased? ";
    cin >> years;

    cout << "What is the current rate of inflation?";
    cin >> inflation;

    inflation *= .01;

    for (int i = 0; i < years; i++)
    {
        itemCost += itemCost * inflation;
    }

    cout << "After " << years << " years of inflation, the item will cost $" << itemCost << endl;

    return 0;

}
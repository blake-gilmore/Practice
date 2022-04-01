#include <iostream>

using namespace std;

int main()
{
    double manufactureAmount, realAmount;
    cout << "Enter the amount of gigabytes in your drive system: ";
    cin >> manufactureAmount;

    realAmount = manufactureAmount - (.073741*manufactureAmount);
    cout << "The actual amount is " << realAmount <<  " GB\n";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    double amountNeeded;
    double interest;
    int duration;

    double monthlyPay;
    double totalAmount;

    cout << "Please enter the amount needed: ";
    cin >> amountNeeded;

    cout << "Please enter the amount of interest: ";
    cin >> interest;

    cout << "Finally, please enter the duration of the loan in months: ";
    cin >> duration;

    totalAmount = amountNeeded / (1 - interest);
    monthlyPay = totalAmount / duration;

    cout << "In order to get $" << amountNeeded << ", you will need to borrow $" << totalAmount << endl
         << "Over a period of " << duration << " months, you will pay $" << monthlyPay << " every month.";

         return 0;
}
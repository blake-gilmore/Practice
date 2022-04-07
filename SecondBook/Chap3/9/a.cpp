#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double averageDailyBalance, netBalance, d1, d2, payment, interestRate;
    double finalInterest;
    cout << "Enter netBalance, payment, d1, d2, and interest rate per month: ";
    cin >> netBalance >> payment >> d1 >> d2 >> interestRate;

    averageDailyBalance = (netBalance*d1-payment*d2)/d1;

    finalInterest = averageDailyBalance * interestRate;

    cout << "Interest is: " << finalInterest;

    return 0;
}
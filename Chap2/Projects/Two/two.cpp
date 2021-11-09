#include <iostream>
using namespace std;

int main()
{
    const double MONTH_INTEREST = .015;
    const int MONTH_PAYMENT = 50;
    int monthsPaid = 0;
    double totalInterest = 0;
    double totalDebt = 1000;

    while (totalDebt > 0)
    {
        totalInterest += totalDebt * MONTH_INTEREST;
        totalDebt += totalDebt * MONTH_INTEREST;
        totalDebt -= MONTH_PAYMENT;
        monthsPaid++;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    cout << "It took " << monthsPaid << " months to pay off the debt. You paid $" << totalInterest << " interest on this loan." << endl;

    return 0;
}
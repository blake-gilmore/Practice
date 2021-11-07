#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    const double SOCIAL = .06;
    const double FEDINCOME = .14;
    const double STATEINCOME = .05;
    const double HOURLY = 16.78;
    const double OVERTIME = 25.17;
    const int UNION = 10;
    const int REGHOURS = 40;

    double dependentWithheld = 0;
    double socialWithheld;
    double fedWithheld;
    double stateWithheld;
    double grossPay = 0;
    double totalWithheld;
    int dependents;
    int workerHours;

    cout << "Input the number of hours you worked this week: ";
    cin >> workerHours;

    cout << "How many dependents do you have: ";
    cin >> dependents;

    if (workerHours > REGHOURS)
    {
        grossPay = (workerHours - 40.00) * OVERTIME;
        int overtimeHours = workerHours - 40;
        workerHours = workerHours - overtimeHours;
        cout << grossPay;
    }

    grossPay = grossPay + (workerHours * HOURLY);
    socialWithheld = grossPay * SOCIAL;
    fedWithheld = grossPay * FEDINCOME;
    stateWithheld = grossPay * STATEINCOME;

    if (dependents > 2)
    {
        dependentWithheld = 35;
    }

    totalWithheld = socialWithheld + fedWithheld  + dependentWithheld + stateWithheld + UNION;

    cout << "Your gross pay was $" << grossPay << ", your withholding amount is $" << totalWithheld << " and your take-home pay this week is $" << grossPay - totalWithheld << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    double baseSalary, noOfServiceYears, bonus;

    cout << "Enter base salary and number of service years: ";
    cin >> baseSalary >> noOfServiceYears;

    if (noOfServiceYears <= 5)
    {
        bonus = 10*noOfServiceYears;
    }
    else
        bonus = 20 * noOfServiceYears;

    cout << "Enter total sales: ";
    double totalSales;
    cin >> totalSales;

    double additionalBonus;
    if (totalSales < 5000)
        additionalBonus = 0;
    else if (totalSales >= 5000 && totalSales < 10000)
    {
        additionalBonus = totalSales * (0.03);
    }
    else    
        additionalBonus = totalSales * (.06);

    double paycheck;
    paycheck = baseSalary + bonus + additionalBonus;

    cout << "Paycheck: " << paycheck << endl;

    return 0;
}
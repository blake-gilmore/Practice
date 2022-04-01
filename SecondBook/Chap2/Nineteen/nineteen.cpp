#include <iostream>

using namespace std;

int main()
{
    const double TAX_RATE = .14;
    const double CLOTHES = .10;
    const double SCHOOL = .01;
    const double SAVINGS_BONDS = .25;
    const double PARENTS_AMOUNT = .50;
    double payRate, numHours, totalIncome, amountSpent, parentsSpent;

    cout << "Enter pay rate: ";
    cin >> payRate;
    cout << "Enter number of hours worked: ";
    cin >> numHours;

    totalIncome = payRate * numHours;

    cout << "Income before: $" << totalIncome << endl;
    totalIncome = totalIncome - (totalIncome*TAX_RATE);
    cout << "Income after taxes: $" << totalIncome << endl;

    amountSpent = totalIncome*CLOTHES;
    cout << "Amount spent on clothes: $" << amountSpent << endl;
    amountSpent = totalIncome*SCHOOL;
    cout << "Amount spent on school: $" << amountSpent << endl;

    totalIncome = totalIncome - (totalIncome*CLOTHES+totalIncome*SCHOOL);

    amountSpent = totalIncome*SAVINGS_BONDS;
    parentsSpent = static_cast<int> (amountSpent) * PARENTS_AMOUNT;

    cout << "You spent $" << amountSpent << " on bonds. Your parents spent $" << parentsSpent << endl;


    return 0;
}
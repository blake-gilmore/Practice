#include <iostream>

using namespace std;

int main()
{
    double billingAmount, payment, percent, credit, penalty;
    bool paid(false);
    cout << "Enter billing amount and payment amount: ";
    cin >> billingAmount >> payment;

    percent = (payment / billingAmount) * 100;

    if (percent == 100)
    {
        paid = true;
        credit = billingAmount*.01;
        if (credit > 10)
        {
            credit = 10;
        }
    }
    else if (payment >= 50)
    {
        billingAmount -= payment;
        penalty = payment * .05;
    }
    else if (payment >= 20 && payment < 50)
    {
        billingAmount -= payment;
        penalty = payment * .10;
    }
    else
    {
        billingAmount -= payment;
        penalty = payment * .20;
    }

    if (paid == true)
    {
        cout << "Paid in full. Credit is $" << credit << endl;
    }
    else
    {
        cout << "New balance is " << billingAmount << " and penalty is " << penalty << endl;
    }
    return 0;
}
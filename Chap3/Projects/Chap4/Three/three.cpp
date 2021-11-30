#include <iostream>
using namespace std;

void computeCoin(int coinValue, int& number, int& amountLeft);

int main()
{
    int amount, quarters, dimes, pennies;
    char cont;

    do
    {
        cout << "Enter the amount in cents: ";
        cin >> amount;

        computeCoin(25, quarters, amount);
        computeCoin(10, dimes, amount);
        computeCoin ( 1, pennies, amount);

        cout << "You get back " << quarters << " quarters, " << dimes << " dimes, " << pennies << " pennies.\n";
        cout << "Would you like to do it again?";
        cin >> cont;
    } while (cont  == 'y');
    
    return 0;
}

void computeCoin (int coinValue, int& number, int& amountLeft)
{
    number = amountLeft / coinValue;
    amountLeft = amountLeft % coinValue;
    
}
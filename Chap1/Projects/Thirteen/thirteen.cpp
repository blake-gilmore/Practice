#include <iostream>
using namespace std;

int main()
{
    double drinkCaffeine;
    const double CAFFEINEKILL = 1000;
    double amountToKill;

    cout << "Enter how many milligrams of caffeine are in your drink: ";
    cin >> drinkCaffeine;

    amountToKill = CAFFEINEKILL / drinkCaffeine;

    cout << "It would take approximately " << amountToKill << " drinks to kill you.";

    return 0;
}
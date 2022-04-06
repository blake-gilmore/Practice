#include <iostream>

using namespace std;

int main()
{
    int quarters, dimes, nickels, pennies;
    cout << "Enter number of quarters: ";
    cin >> quarters;
    cout << "Enter dimes: ";
    cin >> dimes;
    cout << "Enter nickels: ";
    cin >> nickels;
    
    pennies = quarters*25 + dimes*10 + nickels*5;

    cout << "Pennies: " << pennies << endl;

    return 0;
}
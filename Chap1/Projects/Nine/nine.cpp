#include <iostream>
using namespace std;

int main()
{
    const int CANDYBAR = 10;
    const int GUMBALL = 3;

    int coupons;
    int numberOfCandybars;
    int numberOfGumballs;

    cout << "Enter the number of coupons you've won: ";
    cin >> coupons;

    numberOfCandybars = coupons / CANDYBAR;
    numberOfGumballs = (coupons % CANDYBAR) / GUMBALL;

    cout << "You can get " << numberOfCandybars << " candybars and " << numberOfGumballs << " gumballs with your coupons.\n\n";

    return 0;
}
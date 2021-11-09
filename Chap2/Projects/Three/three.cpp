#include <iostream>
using namespace std;

int main()
{
    double startingCash;
    int coupons = 0;
    int totalChocolate = 0;;

    cout << "How much money do you start with: ";
    cin >> startingCash;

    while (startingCash >= 1)
    {
        totalChocolate++;
        startingCash--;
        coupons++;

        if (coupons == 7)
        {
            totalChocolate++;
            coupons = 1;
        }
    }

    cout << "You have " << coupons << " coupons left, but you bought " << totalChocolate << " chocolate bars!\n\n";

    return 0;
}
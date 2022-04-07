#include <iostream>
using namespace std;
int main()
{
    double number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        cout << "Negative\n";
    else if (number > 0)
        cout << "Positive\n";
    else
        cout << "Zero\n";

    return 0;
}
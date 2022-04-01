#include <iostream>

using namespace std;

int main()
{
    double const PI = 3.141593;
    double totalPrice, perSquareInch, radius;

    cout << "Enter pizza price: ";
    cin >> totalPrice;

    cout << "Enter radius: ";
    cin >> radius;

    perSquareInch = totalPrice/(PI*radius*radius);

    cout << "Price per square inch : $" << perSquareInch << " per square inch.\n";
    return 0;
}
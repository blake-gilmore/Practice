#include <iostream>

using namespace std;

/*
Algorithm:
1. Get base price
2. Get finished area in square feet for 3 models
3. Determine which has lease price per square foot
4. Output best model.
*/
int main()
{
    double base1, base2, base3, one, two, three;

    cout << "Enter base price of all three: ";
    cin >> base1 >> base2 >> base3;

    cout << "Enter finished area for all three: ";
    cin >> one >> two >> three;

    one = base1 / one;
    two = base2 / two;
    three = base3 / three;

    if (one < two && one < three)
        cout << "First house is $" << one << " per square feet.";
    if (two < one && two < three)
        cout << "Second house is $" << two << " per square feet.";

}
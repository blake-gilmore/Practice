#include <iostream>
using namespace std;

int main()
{
    int feet;
    int inches;
    int additionalInches;
    int additionalFeet;
    int idealWeight;

    cout << "Enter how many feet tall you are: ";
    cin >> feet;

    cout << "enter how many inches tall you are: ";
    cin >> inches;

    idealWeight = 110;

    additionalFeet = feet - 5;
    inches = inches + (additionalFeet * 12);
    idealWeight = idealWeight + (inches * 5);

    cout << "Your ideal weight is " << idealWeight << " pounds.";
}
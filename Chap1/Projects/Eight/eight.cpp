#include <iostream>
using namespace std;

int main()
{
    double input;
    double guess;
    double r;

    cout << "Please input a number you'd like to find the square root of: ";
    cin >> input;

    guess = input / 2;
    r = input / guess;
    guess = (guess + r) / 2;
    r = input / guess;
    guess = (guess + r) / 2;
    r = input / guess;
    guess = (guess + r) / 2;
    r = input / guess;
    guess = (guess + r) / 2;
    r = input / guess;
    guess = (guess + r) / 2;
    r = input / guess;
    guess = (guess + r) / 2;

    cout << "The guess to your squre root is " << guess << endl << endl;

    return 0;
}
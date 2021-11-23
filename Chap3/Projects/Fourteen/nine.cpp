#include <iostream>
using namespace std;

int main()
{
    double input;
    double guess;
    double root;
    double previousGuess;
    double onePercent;

    cout << "Please input a number you'd like to find the square root of: ";
    cin >> input;

    guess = input / 2;

    do
    {
        previousGuess = guess;
        onePercent = previousGuess * .01;
        root = input / guess;
        guess = (guess + root) / 2;
    } while ((previousGuess - guess) > onePercent);
    

    cout << "The guess to your square root is " << guess << endl << endl;

    return 0;
}
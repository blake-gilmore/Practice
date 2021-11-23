#include <iostream>

using namespace std;

double calculateRoot(double num);
int main()
{
    char rerunProgram;
    double num;

    do
    {
        cout << "Input a number you would like the square root of: ";
        cin >> num;
        cout << "\nThe square root of " << num << " is " << calculateRoot(num) << endl;
        cout << "Would you like to test another number? (Y/N): ";
        cin >> rerunProgram;
        cout << endl;
    } while (rerunProgram == 'Y');
    return 0;
}

double calculateRoot(double num)
//num is a number greater than or equal to zero
//function returns the square root of the number
{
    double guess, previousGuess, onePercent, root;
    guess = num / 2;

    do
    {
        previousGuess = guess;
        onePercent = previousGuess * .01;
        root = num / guess;
        guess = (guess + root) / 2;
    } while ((previousGuess - guess) > onePercent);

    return guess;
}
#include <iostream>
using namespace std;

int main()
{
    int first, second;

    cout << "Input the first number: ";
    cin >> first;

    cout << "\n" << "Input the second number: ";
    cin >> second;

    int wholeNumber, remainder;

    wholeNumber = first / second;

    remainder = first % second;

    cout << "\n" << "The whole number is " << wholeNumber << " and the remainder is " << remainder << "\n";
    
    return 0;
}
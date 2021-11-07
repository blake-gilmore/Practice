#include <iostream>
using namespace std;

int main()
{
    double seconds;
    double distance;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Enter a time in seconds: ";
    cin >> seconds;

    distance = .5 * 32 * seconds * seconds;

    cout << "An object would travel " << distance << " feet.";

}
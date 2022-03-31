#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds, totalSeconds;

    cout << "Enter Hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;

    minutes += hours *60;
    seconds += minutes * 60;
    cout << "Total seconds is " << seconds << endl;
    return 0;
}
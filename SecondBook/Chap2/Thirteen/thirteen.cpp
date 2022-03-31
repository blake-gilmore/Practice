#include <iostream>
using namespace std;
int main()
{
    int secondsIn, seconds, minutes, hours;

    cout << "Enter elapsed time in seconds: ";
    cin >> secondsIn;

    minutes = secondsIn / 60;
    seconds = secondsIn;
    seconds -= minutes*60;
    hours = minutes / 60;
    minutes -= hours * 60;

    cout << "converted to " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
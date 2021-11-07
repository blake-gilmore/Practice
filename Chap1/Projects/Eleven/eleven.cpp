#include <iostream>
using namespace std;

int main()
{
    int initSeconds;
    int hours;
    int minutes;
    int seconds;

    cout << "Enter a length of time in seconds: ";
    cin >> initSeconds;

    hours = initSeconds / 3600;
    seconds = initSeconds % 3600;

    minutes = seconds / 60;
    seconds %= 60;

    cout << initSeconds << " seconds is " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds\n";
    
}
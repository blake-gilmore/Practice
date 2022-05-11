#include "dayType.h"
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    string tempString;
    dayType firstDay;
    cout << "What day do you want to set to?";
    cin >> tempString;

    firstDay.set(tempString);
    firstDay.printDay();

    cout << "The next day is " << firstDay.getNextDay() << endl;
    cout << "The previous day is " << firstDay.getPreviousDay() << endl;
    cout << "Enter a number of days to add: ";
    int tempNum;
    cin >> tempNum;
    cout << tempNum << " days later is " << firstDay.getByAdding(tempNum) << endl;

    return 0;
}
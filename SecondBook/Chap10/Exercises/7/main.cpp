#include "clockType.h"
#include <iostream>
void printMenu();
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    clockType myClock;
    clockType secondClock(45, 24, 22);
    
    printMenu();
    int selection;
    int newNum;
    cin >> selection;
    while(selection != 10)
    {
        switch (selection)
        {
        case 1:
            cout << "The Hour is " << myClock.getHour();
            break;
        case 2:
            cout << "The minute is " << myClock.getMinutes();
            break;
        case 3:
            cout << "The second is " << myClock.getSeconds();
            break;
        case 4:
            cout << "Enter the hour you'd like to change to: ";
            cin >> newNum;
            myClock.setHour(newNum);
            break;
        case 5:
            cout << "Enter the minute you'd like to change to: ";
            cin >> newNum;
            myClock.setMinutes(newNum);
            break;
        case 6:
            cout << "Enter the second you'd like to change to: ";
            cin >> newNum;
            myClock.setSeconds(newNum);
            break;
        case 7:
            cout << "Total seconds is " << myClock.secondsElapsed();
            break;
        case 8:
            cout << "There are " << myClock.remainingTime() << " seconds in the day left.\n";
            break;
        case 9:
            myClock.compareClocks(secondClock);
            break;
        default:
            cout << "Invalid entry.\n\n";
        }
        cout << "\n\n\n\n";
        printMenu();
        cin >> selection;
    }
}

void printMenu()
{
    using std::cout;
    using std::endl;

    cout << "1. Get hour\n"
         << "2. Get Minutes\n"
         << "3. Get Seconds\n"
         << "4. Set hour\n"
         << "5. Set Minutes\n"
         << "6. Set Seconds\n"
         << "7. Total Number of Seconds\n"
         << "8. Remaining Time in the Day\n"
         << "9. Get Clock Difference\n"
         << "10. Exit Program\n";

    return;
}
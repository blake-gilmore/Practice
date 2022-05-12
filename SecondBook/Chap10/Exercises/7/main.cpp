#include "clockType.h"
#include <iostream>
void printMenu();
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    clockType myClock;
    
    printMenu();
    int selection;
    int newNum;
    cin >> selection;
    while(selection != 9)
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
         << "6. Set Seconds\n";

    return;
}
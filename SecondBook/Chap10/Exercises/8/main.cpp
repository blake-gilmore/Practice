#include "personType.h"
#include <iostream>
void printMenu();
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    personType myPerson;
    
    printMenu();
    int selection;
    string newString;
    cin >> selection;
    while(selection != 9)
    {
        switch (selection)
        {
        case 1:
            cout << "Enter the first name you want to change to: ";
            cin >> newString;
            myPerson.setFirstName(newString);
            break;
        case 2:
            cout << "Enter the last name you want to change to: ";
            cin >> newString;
            myPerson.setLastName(newString);
            break;
        case 3:
            cout << "Enter the middle name you want to change to: ";
            cin >> newString;
            myPerson.setMiddleName(newString);
            break;
        case 4:
            myPerson.print();
            break;
        case 5:
            cout << "Enter the name you'd like to compare: ";
            cin >> newString;
            if (myPerson.isSameFirst(newString))
            {
                cout << "Same first name.\n";
            }
            else
                cout << "Different first names.\n";
            break;
        case 6:
            cout << "Enter the name you'd like to compare: ";
            cin >> newString;
            if (myPerson.isSameLast(newString))
            {
                cout << "Same last name.\n";
            }
            else
                cout << "Different last names.\n";
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

    cout << "1. Set First Name\n"
         << "2. Set Last Name\n"
         << "3. Set Middle Name\n"
         << "4. Print Name\n"
         << "5. Check First Name\n"
         << "6. Check Last Name\n"
         << "9. Exit program\n";

    return;
}
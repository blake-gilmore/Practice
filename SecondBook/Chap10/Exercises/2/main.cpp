#include "temporary.h"
#include <iostream>
#include <string>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;
    temporary newTemp;
    newTemp.print();
    int userSelect;
    string userDescription;
    double userDoub;
    int userInt;
    char userChoice;

do {
    cout << "What to change: \n"
         << "1. Description\n"
         << "2. First\n"
         << "3. Second\n"
         << "4. Year Built\n"
         << "5. Square Footage\n"
         << "6. Price\n"
         << "7. Taxes\n"
         << "8, Style\n";

    cin >> userSelect;
    cout << "Enter new thingy: ";
    if (userSelect == 1)
        cin >> userDescription;
    else
        cin >> userInt;
    

    switch(userSelect)
    {
        case 1:
            newTemp.setDescription(userDescription);
            break;
        case 2:
            newTemp.setFirst(userInt);
            break;
        case 3:
            newTemp.setSecond(userInt);
            break;
        
    }

    cout << "Updated Temp\n\n\n";
    newTemp.print();

    cout << "\n\n\nWould you like to do something else? (y/n)";
    cin >> userChoice;
}while (userChoice == 'y');

return 0;

}
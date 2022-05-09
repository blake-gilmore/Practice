#include "houseType.h"

int main()
{
    houseType newHouse;
    newHouse.printData();
    int userSelect;
    string userStyle;
    double userDoub;
    int userInt;

    cout << "What to change: \n"
         << "1. Bedrooms\n"
         << "2. Bathrooms\n"
         << "3. Garage\n"
         << "4. Year Built\n"
         << "5. Square Footage\n"
         << "6. Price\n"
         << "7. Taxes\n"
         << "8, Style\n";

    cin >> userSelect;
    cout << "Enter new thingy: ";
    if (userSelect == 8)
        cin >> userStyle;
    else if (userSelect == 6 || userSelect == 7)
        cin >> userDoub;
    else
        cin >> userInt;
    

    switch(userSelect)
    {
        case 1:
            
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
    }
}
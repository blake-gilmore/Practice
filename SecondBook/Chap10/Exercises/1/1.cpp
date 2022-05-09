#include "houseType.h"

int main()
{
    houseType newHouse;
    newHouse.printData();
    int userSelect;
    string userStyle;
    double userDoub;
    int userInt;
    char userChoice;

do {
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
            newHouse.setNumOfBedrooms(userInt);
            break;
        case 2:
            newHouse.setNumOfBathrooms(userInt);
            break;
        case 3:
            newHouse.setNumOfCarsGarage(userInt);
            break;
        case 4:
            newHouse.setYearBuilt(userInt);
            break;
        case 5:
            newHouse.setFinishedSquareFootage(userInt);
            break;
        case 6:
            newHouse.setPrice(userDoub);
            break;
        case 7:
            newHouse.setTax(userDoub);
            break;
        case 8:
            newHouse.setStyle(userStyle);
            break;
    }

    cout << "Updated House\n\n\n";
    newHouse.printData();

    cout << "\n\n\nWould you like to do something else? (y/n)";
    cin >> userChoice;
}while (userChoice == 'y');

return 0;

}
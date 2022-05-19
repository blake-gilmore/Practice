#include "extPersonType.h"
#include <iostream>
extPersonType::extPersonType(string inType, string inNumber)
{
    personType();
    addressType();
    dateType();
    type = inType;
    phoneNumber = inNumber;
}
void extPersonType::printInformation()
{
    personType::print();
    addressType::printInformation();
    dateType::printDate();
    cout << type << endl << phoneNumber << endl;
}
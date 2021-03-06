#include "extPersonType.h"
#include "string.h"
#include <iostream>
#include <fstream>
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

void extPersonType::setInformation()
{
    std::string tempOne, tempTwo, tempThree;
    int numOne, numTwo, numThree;
    std::cout << "Enter first and last name: ";
    std::cin >> tempOne >> tempTwo;
    setName(tempOne, tempTwo);

    std::cout << "Enter person type: ";
    std::cin >> tempOne;
    setType(tempOne);

    std::cout << "Enter phone number: ";
    std::cin >> tempOne;
    setPhoneNumber(tempOne);

    std::cout << "Enter month, day, and year of birth: ";
    std::cin >> numOne >> numTwo >> numThree;
    setDate(numOne, numTwo, numThree);

    std::cout << "Enter address: ";
    std::cin >> tempOne;
    setAddress(tempOne);

    std::cout << "Enter City: ";
    std::cin >> tempOne;
    setCity(tempOne);

    std::cout << "Enter State: ";
    std::cin >> tempOne;
    setState(tempOne);

    std::cout << "Enter zip code: ";
    std::cin >> tempOne;
    setZipCode(tempOne);
}

std::ostream& operator<<(std::ostream& fileOut, extPersonType& itemToWrite)
{
    fileOut << itemToWrite.firstName << " " << itemToWrite.lastName << std::endl
            << itemToWrite.phoneNumber << std::endl
            << itemToWrite.type << std::endl
            << itemToWrite.dMonth << " " << itemToWrite.dDay << ", " << itemToWrite.dYear << std::endl
            << itemToWrite.address << " " << itemToWrite.city << ", " << itemToWrite.state << " " << itemToWrite.zipCode << "\n\n\n";
            
    return fileOut;
}
#include <iostream>
#include "addressType.h"

addressType::addressType(std::string inAddress, std::string inCity, std::string inState, std::string inZipCode)
{
    address = inAddress;
    city = inCity;
    state = inState;
    zipCode = inZipCode;
    return;
}
void addressType::printInformation()
{
    using std::cout;
    using std::endl;
    cout << "Address: " << address << endl
         << "City: " << city << endl
         << "State: " << state << endl
         << "Zip Code: " << zipCode << endl;
    return;
}
void addressType::setAddress(std::string input)
{
    address = input;
    return;
}
void addressType::setCity(std::string input)
{
    city = input;
    return;
}
void addressType::setState(std::string input)
{
    state = input;
    return;
}
void addressType::setZipCode(std::string input)
{
    zipCode = input;
    return;
}
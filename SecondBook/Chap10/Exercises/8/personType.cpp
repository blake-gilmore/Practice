#include <iostream>
#include <string>
#include "personType.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

void personType::print() const
{
    cout << firstName << " " << middleName << " " << lastName << endl;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}
string personType::getFirstName() const
{
    return firstName;
}
string personType::getLastName() const
{
    return lastName;
}
personType::personType(string first, string last, string middle)
{
    firstName = first;
    lastName = last;
    middleName = middle;
}

void personType::setFirstName(string first)
{
    firstName = first;
}
void personType::setLastName(string last)
{
    lastName = last;
}
void personType::setMiddleName(string middle)
{
    middleName = middle;
}

bool personType::isSameFirst(string first)
{
    if (firstName == first)
        return true;
    else
        return false;
}
bool personType::isSameLast(string last)
{
    if (lastName == last)
        return true;
    else
        return false;
}
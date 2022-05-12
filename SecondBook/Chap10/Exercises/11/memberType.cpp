#include "memberType.h"
#include <iostream>
memberType::memberType(string newName, string newId, int newNumBought, double newAmount)
{
    name = newName;
    id = newId;
    numBought = newNumBought;
    amountSpent = newAmount;
}
string memberType::getName()
{
    return name;
}
string memberType::getid()
{
    return id;
}
int memberType::getNumBought()
{
    return numBought;
}
double memberType::getAmountSpent()
{
    return amountSpent;
}
void memberType::setName(string newName)
{
    name = newName;
    return;
}
void memberType::setId(string newId)
{
    id = newId;
    return;
}
void memberType::setNumBought(int newNumBought)
{
    numBought = newNumBought;
}
void memberType::setAmountSpent(int newAmount)
{
    amountSpent = newAmount;
}

void memberType::printName() const
{
    using std::cout;
    using std::endl;
    cout << "Name: " << name << endl;
    return;
}
void memberType::printNumBought() const
{
    using std::cout;
    using std::endl;
    cout << "Number bought: " << numBought << endl;
    return;
}
void memberType::printAmountSpent() const
{
    using std::cout;
    using std::endl;
    cout << "Amount spent: $" << amountSpent << endl;
    return;
}
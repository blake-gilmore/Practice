#include "dispenserType.h"
int dispenserType::getNoOfItems() const
{
    return numberOfItems;
}
int dispenserType::getCost() const
{
    return cost;
}
void dispenserType::makeSale()
{
    numberOfItems--;
}
dispenserType::dispenserType(int setNoOfItems = 50, int setCost = 50)
{
    if (setNoOfItems >= 0)
        numberOfItems = setNoOfItems;
    else
        numberOfItems = 50;
    if (setCost >= 50)
        cost = setCost;
    else   
        cost = 50;
}
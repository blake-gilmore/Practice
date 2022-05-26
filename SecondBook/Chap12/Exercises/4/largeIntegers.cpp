#include "largeIntegers.h"


largeIntegers::largeIntegers()
{
    largeInt = NULL;
    lengthOfInteger = 0;
    return;
}
const char* largeIntegers::getInteger() const
{
    return largeInt;
}
void largeIntegers::setInteger(std::string inNum)
{   
    delete[] largeInt;
    largeInt = new char[inNum.length()];
    lengthOfInteger = inNum.length();
    return;
}
void largeIntegers::addIntegers(largeIntegers&firstNum, largeIntegers& secondNum)
{
    delete[] largeInt;
    if ((firstNum.lengthOfInteger == secondNum.lengthOfInteger) && 
        (firstNum.largeInt[lengthOfInteger - 1] + secondNum.largeInt[lengthOfInteger-1]) >= 10)
            largeInt = new char[firstNum.lengthOfInteger];

    else if (firstNum.lengthOfInteger >= secondNum.lengthOfInteger)
        largeInt = new char[firstNum.lengthOfInteger];

    else
        largeInt = new char[secondNum.lengthOfInteger];

    
}
void largeIntegers::subtractIntegers(largeIntegers&, largeIntegers&)
{

}
void largeIntegers::multiplyIntegers(largeIntegers&, largeIntegers&)
{

}
bool largeIntegers::compareIntegers(std::string)
{

}

largeIntegers::~largeIntegers()
{
    delete[] largeInt;
    return;
}

int largeIntegers::getLength()
{
    return lengthOfInteger;
}

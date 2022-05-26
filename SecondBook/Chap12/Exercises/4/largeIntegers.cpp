#include "largeIntegers.h"
#include <string.h>
#include <iostream>


largeIntegers::largeIntegers()
{
    largeInt = NULL;
    lengthOfInteger = 0;
    return;
}
const int* largeIntegers::getInteger() const
{
    return largeInt;
}
void largeIntegers::setInteger(std::string inNum)
{   
    delete[] largeInt;
    int index(0);
    largeInt = new int[inNum.length()];
    lengthOfInteger = inNum.length();
    for (int i = (lengthOfInteger-1); i >= 0; i--)
    {
        largeInt[i] = (inNum[index] - '0');
        index++;
    }   
    return;
}
void largeIntegers::addIntegers(largeIntegers&firstNum, largeIntegers& secondNum)
{
    int largestSize;
    int tempAdd;
    int* largest(NULL), *nextLargest(NULL), *tempPtr(NULL);
    if (firstNum.lengthOfInteger >= secondNum.lengthOfInteger)
    {
        largestSize = firstNum.lengthOfInteger;
        largest = firstNum.largeInt;
        nextLargest = secondNum.largeInt;
    }
    
    else
    {
        largestSize = secondNum.lengthOfInteger;
        largest = secondNum.largeInt;
        nextLargest = firstNum.largeInt;
    }

    delete[] largeInt;

    if ((firstNum.lengthOfInteger == secondNum.lengthOfInteger) && 
        (firstNum.largeInt[lengthOfInteger - 1] + secondNum.largeInt[lengthOfInteger-1]) >= 10)
        {
            lengthOfInteger = largestSize+1;
            largeInt = new int[lengthOfInteger];
            memset(largeInt, 0, (lengthOfInteger)*sizeof(*largeInt));
        }
    else
    {
        lengthOfInteger = largestSize;
        largeInt = new int[lengthOfInteger];
        memset(largeInt, 0, (lengthOfInteger)*sizeof(*largeInt));
    }

    

    for (int i = 0; i < largestSize; i++)
    {
        largeInt[i] += largest[i] + nextLargest[i];
        if (largeInt[i] > 9 && ((i+1)<largestSize))
        {
            largeInt[i+1]++;
            largeInt[i] -= 10;
        }
        else if (largeInt[i] > 9 && ((i+1) == largestSize))
        {
            tempPtr = largeInt;
            largeInt = new int[lengthOfInteger+1];
            memset(largeInt, 0, (lengthOfInteger+1)*sizeof(*largeInt));
            for (int j = 0; j < lengthOfInteger; j++)
            {
                largeInt[j] = tempPtr[j];
            }
            lengthOfInteger++;
            largeInt[i+1]++;
            largeInt[i] -= 10;
            delete[] tempPtr;
            tempPtr = NULL;
        }
    }
    return;
}

void largeIntegers::subtractIntegers(largeIntegers& firstNum, largeIntegers&secondNum)
{
    int largestSize;
    int tempAdd;
    bool isNegative(false);
    int* largest(NULL), *nextLargest(NULL), *tempPtr(NULL);
    if (firstNum.lengthOfInteger >= secondNum.lengthOfInteger)
    {
        largestSize = firstNum.lengthOfInteger;
        largest = firstNum.largeInt;
        nextLargest = secondNum.largeInt;
    }
    
    else
    {
        largestSize = secondNum.lengthOfInteger;
        largest = secondNum.largeInt;
        nextLargest = firstNum.largeInt;
    }

    delete[] largeInt;

    lengthOfInteger = largestSize;
    largeInt = new int[lengthOfInteger];
    memset(largeInt, 0, (lengthOfInteger)*sizeof(*largeInt));
    int index(0);
    for (int i = 0; i < largestSize; i++)
    {
        index = 1;
        if (largest[i] < nextLargest[i])
        {
            while(largest[i+index] == 0)
                index++;

            for (int j = index; j >=1; j--)
            {
                largest[i+j]--;
                largest[i+(j-1)] +=10;
            }
        }

            largeInt[i] = largest[i] - nextLargest[i];
    }
    return;
}
void largeIntegers::multiplyIntegers(largeIntegers&, largeIntegers&)
{

}
bool largeIntegers::compareIntegers(std::string)
{
    return true;
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

void largeIntegers::print() const
{
    for (int i = lengthOfInteger-1; i >=0; i--)
    {
        std::cout << largeInt[i];
    }
    std::cout << std::endl;
}

bool largeIntegers::isSmaller(largeIntegers& inNum)
{
    if (lengthOfInteger < inNum.lengthOfInteger)
        return true;
    else if (lengthOfInteger > inNum.lengthOfInteger)
        return false;

    for (int i = lengthOfInteger-1; i >=0; i--)
    {
        if (largeInt[i] < inNum.largeInt[i])
            return false;
        
    }
    return true;
}


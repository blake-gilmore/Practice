#include "integerManipulation.h"
#include <cmath>
#include <iostream>

using namespace std;
void integerManipulation::setNum(long long n)
{
    num = n;
}
long long integerManipulation::getNum()
{
    return num;
}
void integerManipulation::reverseNum()
{
    //Get number of digits
    //Get each digit through a for-loop of each digit
    long long temp = abs(num);
    int rem = 0;
    int counter(1);
    rem = temp % 10;
    temp /= 10;
    revNum = rem;
    while (temp != 0)
    {
        rem = temp % 10;
        revNum *= 10;
        revNum += rem;
        temp /= 10;
    }
    if (num < 0)
        revNum *= -1;

    return;
}

void integerManipulation::classifyDigits()
{
    long long temp;
    temp = abs(num);
    int digit;
    while (temp != 0)
    {
        digit = temp - (temp / 10 ) * 10;
        temp = temp / 10;
        if (digit % 2 == 0)
        {
            evensCount++;
            if (digit == 0)
                zerosCount++;
        }
        else
        oddsCount++;
    }
}
int integerManipulation::getEvensCount()
{
    return evensCount;
}
int integerManipulation::getOddsCount()
{
    return oddsCount;
}
int integerManipulation::getZerosCount()
{
    return zerosCount;
}
int integerManipulation::sumDigits()
{
    int runningSum(0);
    long long temp(num);
    runningSum += (temp % 10);
    temp /= 10;

    while (temp != 0)
    {
        runningSum += (temp % 10);
        temp /= 10;
    }
    return 0;
}
integerManipulation::integerManipulation(long long n)
{
    num = n;
    revNum = 0;
    evensCount = 0;
    oddsCount = 0;
    zerosCount = 0;
}
void integerManipulation::splitInBlocks(int numDigits)
{
    using namespace std;
    long long sepNum, tempNum(num);
    long long sepSum;
    int blockCount(1);
    if (numDigits<=0)
    {
        cout << "Invalid.\n";
        return;
    }

    do
    {
        sepNum = 0;
        sepSum = 0;
        for (int i = 0; i < numDigits; i++)
        {
            sepNum += ((tempNum % 10) * (10*i));
            tempNum /= 10;
            
            if (tempNum == 0)
            {
                break;
            }
        }

        cout << "Block " << blockCount << ": " << sepNum << "  Sum: " << sepSum;
        blockCount++;
    } while (tempNum > 0);

    return;
}

bool integerManipulation::isPrime()
{
    long long tempNum(num);
    bool isDivide(false);
    for (long long i = (num-1); i > 1; i--)
    {
        if ((num % i) == 0)
        {
            isDivide = true;
            break;
        }
    }
    return isDivide;
}

void integerManipulation::findFactorization()
{
    long long tempNum = num;
    long long currentFact;
    integerManipulation newInt;
    cout << num << " = ";
    while (tempNum > 1)
    {
        for (int i = 2; i <= tempNum; i++)
        {
            newInt.setNum(i);
            if (!(newInt.isPrime()))
            {
                if ((tempNum % newInt.getNum()) == 0)
                {
                    cout << (newInt.getNum());
                    tempNum /= newInt.getNum();
                    if (tempNum != 1)
                        cout << " x ";
                }
            }
        }
    }
    cout << endl;
    return;
}

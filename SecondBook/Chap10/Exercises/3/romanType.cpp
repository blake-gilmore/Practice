#include "romanType.h"

romanType::romanType(string numeral, double decimal)
{
    set(numeral, decimal);
    return;
}
void romanType::set(string newRoman, double newDecimal)
{
    romanNumeral = newRoman;
    romanToDecimal = newDecimal;
    return;
}
void romanType::setRoman(string newRoman)
{
    romanNumeral = newRoman;
    convertToDecimal();
    return;
}
void romanType::printEither() const
{
    using std::cin;
    using std::cout;
    using std::endl;
    char* userInput = new char;
    cout << "Would you like to print in Roman Numerals or Decimal format?(r/d)";
    cin >> *userInput;
    if (*userInput == 'r')
        cout << romanNumeral;
    else
        cout << romanToDecimal;

    delete userInput;
    userInput = NULL;
    return;

}
void romanType::convertToDecimal()
{
    double runningSum(0.0), smallNum(0.0);
    int numBefore(0);
    char tempNumeral;
    int length = romanNumeral.length();
    for (int i = 0; i < length; i++)
    {
        tempNumeral = romanNumeral[i];
        if (tempNumeral == 'M')
            runningSum += 1000;
        else if (tempNumeral == 'D')
            runningSum += 500;
        else if (tempNumeral == 'C')
            runningSum += 100;
        else if (tempNumeral == 'L')
            runningSum += 50;
        else if (tempNumeral == 'X')
            runningSum += 10;
        else if ((i + 1) == length)
        {
            if (tempNumeral == 'V')
                runningSum += 5;
            else
                runningSum += 1;
        }
        else
        {
            //For IV IX III II
            if (tempNumeral == 'I')
            {
                if (romanNumeral[i+1] == 'I')
                {
                    for (int j = i; j < length; j++)
                    {
                        runningSum += 1;
                    }
                    break;
                }
                else
                {
                    if (romanNumeral[i+1] == 'V')
                    {
                        runningSum += 4;
                    }
                    else
                    {
                        runningSum += 9;
                    }
                    break;
                }
            }
            //For VI VII and VIII
            else
            {
                for (int j = i; j<length; j++)
                {
                    tempNumeral = romanNumeral[j];
                    if (tempNumeral == 'V')
                        runningSum += 5;
                    else
                        runningSum += 1;
                }
                break;
            }
        }
    }
    romanToDecimal = runningSum;
    return;
}
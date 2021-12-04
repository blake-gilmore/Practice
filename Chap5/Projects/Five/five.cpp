#include <iostream>
#include <cmath>
using namespace std;
const int MAX_LENGTH = 20;
void fillArray(char list[], int size, int& numFilled);
int evaluateSum(char numOne[], int numFilledOne, char numTwo[], int numFilledTwo);
void convertToChar(char sumChar[], int sum, int& numFilledSum);
void outputArray(char sumChar[], int numFilledSum);
int convertToInt(char num[], int numFilled);
int getDigitSize(int sum);



int main()
{
    char numOne[MAX_LENGTH], numTwo[MAX_LENGTH], sumChar[MAX_LENGTH], cont;
    int numFilledOne, numFilledTwo, numFilledSum, sum;

    do
    {
        cout << "Enter a list of numbers, input 'F' when finished";
        fillArray(numOne, MAX_LENGTH, numFilledOne);
        cout << "Enter a second list of numbers, input 'F' when finished";
        fillArray(numTwo, MAX_LENGTH, numFilledTwo);
        sum = evaluateSum(numOne, numFilledOne, numTwo, numFilledTwo);
        convertToChar(sumChar, sum, numFilledSum);
        outputArray(sumChar, numFilledSum);

        cout << "If you would like to do another calculation, input 'Y'";
    }while (cont == 'Y');
    
}

void fillArray(char list[], int size, int& numFilled)
//Preconditions: size is the declared size of the array
//Postcondition: numberUsed is the number of values stored in list
//list[0] through list[numberUsed-1] will be filled with values from user
{
    char next, index = 0;
    cin >> next;
    while ((next != 'F') && index < size)
    {
        list[index] = next;
        index++;
        cin >> next;
    }
    numFilled = index;
    return;
}

int evaluateSum(char numOne[], int numFilledOne, char numTwo[], int numFilledTwo)
{
    int num1, num2, sum;
    num1 = convertToInt(numOne, numFilledOne);
    num2 = convertToInt(numTwo, numFilledTwo);
    sum = num1 + num2;
    if (sum >= 1e21)
    {
        cout << "Integer overload. Exiting";
        exit(2);
    }
    return sum;
}
int convertToInt(char num[], int numFilled)
{
    int total(0);
    for (int i = 0; i < numFilled; i++)
    {
        total += ((num[i] - '0') * pow(10, ((numFilled-1) - i)));
    }
    return total;
}
void convertToChar(char sumChar[], int sum, int& numFilledSum)
{
    int digitSize;
    digitSize = getDigitSize(sum);
    numFilledSum = digitSize;
    for (int i = 0; i < digitSize; i++)
    {
        sumChar[i] = '0' + (sum / (static_cast<int>(pow(10,(digitSize-1) - i))));
        sum -= (sum / (static_cast<int>(pow(10,(digitSize-1) - i)))) * static_cast<int>(pow(10,(digitSize-1) - i));
    }
    return;
}
void outputArray(char sumChar[], int numFilledSum)
{
    cout << "The sum of your numbers is ";
    for (int i = 0; i < numFilledSum; i++)
    {
        cout << sumChar[i];
    }
    return;
}
int getDigitSize(int sum)
{
    int digits(1);
    while ((sum / static_cast<int>(pow(10,(digits)))) > 0)
    {
        digits++;
    }
    return digits;
}


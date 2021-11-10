#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int inputNumber;
    int firstNumber;
    int secondNumber;
    bool pairFound = false;
    int loopNumber = 0;

    ifstream inputStream;
    ifstream secondStream;
    inputStream.open("numbers.txt");

    cout << "Enter an integer: ";
    cin >> inputNumber;

    while (inputStream >> firstNumber)
    {
        secondStream.open("numbers.txt");
        
        for (int i = 0; i < loopNumber; i++)
                secondStream >> secondNumber;
                
        while (secondStream >> secondNumber)
        {
            
            if (firstNumber + secondNumber == inputNumber)
            {
                cout << "In the file, the pair of numbers " << firstNumber << " and " << secondNumber << " add up to your input " << inputNumber << endl;
                pairFound = true;
            }
        }
        loopNumber++;
        secondStream.close();
    }

    if (pairFound == false)
        cout << "No pair.\n";

    return 0;
}
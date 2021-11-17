#include <iostream>

using namespace std;
void printNumbers (int num1, int num2);

int main()
{
    for (int i = 9; i >=0; i--)
    {
        for (int j = 9; j >=0; j--)
        {
            if (i < 9 || j < 9)
            {
                printNumbers(i, j);
                cout << " bottles of beer on the wall. \n";
            }
            if (i >0 || j>0)
            {
                printNumbers ( i, j);
                cout << " bottles of beer on the wall,\n";
                printNumbers(i, j);
                cout << " bottles of beer.\nYou take one down, pass it around, ";
            }
            
        }
    }

    return 0;
}

void printNumbers (int num1, int num2)
{
    switch (num1)
    {
        case 9:
            cout << "Ninety";
            break;
        case 8:
            cout << "Eighty";
            break;
        case 7:
            cout << "Seventy";
            break;
        case 6:
            cout << "Sixty";
            break;
        case 5:
            cout << "Fifty";
            break;
        case 4:
            cout << "Forty";
            break;
        case 3:
            cout << "Thirty";
            break;
        case 2:
            cout << "Twenty";
            break;
        case 1:
        {
            switch (num2)
            {
                case 9:
                    cout << "Nineteen";
                    break;
                case 8:
                    cout << "Eighteen";
                    break;
                case 7:
                    cout << "Seventeen";
                    break;
                case 6:
                    cout << "Sixteen";
                    break;
                case 5:
                    cout << "Fifteen";
                    break;
                case 4:
                    cout << "Fourteen";
                    break;
                case 3:
                    cout << "Thirteen";
                    break;
                case 2:
                    cout << "Twelve";
                    break;
                case 1:
                    cout << "Eleven";
                    break;
                case 0:
                    cout << "Ten";
                    break;
            }
            return;
        }
    }

    if (num2 != 0 && num1 > 1)
        cout << "-";

    switch (num2)
    {
        case 9:
            cout << "Nine";
            break;
        case 8:
            cout << "Eight";
            break;
        case 7:
            cout << "Seven";
            break;
        case 6:
            cout << "Six";
            break;
        case 5:
            cout << "Five";
            break;
        case 4:
            cout << "Four";
            break;
        case 3:
            cout << "Three";
            break;
        case 2:
            cout << "Two";
            break;
        case 1:
            cout << "One";
            break;
    }
    if (num1 == 0 && num2 == 0)
        cout << "Zero";

    return;
}
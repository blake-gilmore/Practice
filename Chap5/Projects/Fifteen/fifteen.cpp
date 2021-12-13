#include <iostream>
#include <cstdlib>
using namespace std;
void fillRandomPin(int authenticatePin[]);
void outputSequence(int authenticatePin[]);
bool testUser(int authenticatePin[], int pin[]);

int main()
{
    int pin[] = {1,2,3,4,5};
    bool authenticated;
    int authenticatePin[10];
    fillRandomPin(authenticatePin);
    outputSequence(authenticatePin);
    do
    {
        authenticated = testUser(authenticatePin, pin);
    } while (authenticated == false);
    cout << "Password inputted correctly!";
    return 0;
}
void fillRandomPin(int authenticatePin[])
{
    for (int i = 0; i < 10; i++)
    {
        authenticatePin[i] = rand() % 10;
    }
    return;
}
void outputSequence(int authenticatePin[])
{
    cout << "PIN:  ";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "NUM:  ";
    for (int i = 0; i < 10; i++)
    {
        cout << authenticatePin[i] << " ";
    }
    cout << endl;
    return;
}
bool testUser(int authenticatePin[], int pin[])
{
    bool authenticated;
    int userPin[5];
    cout << "Enter the digits of your pin with a space in between: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> userPin[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((authenticatePin[j] == userPin[i]) && (j == pin[i]))
            {
                authenticated = true;
                break;
            }
            else
            {
                authenticated = false;
            }
        }
        if (authenticated == false)
        {
            cout << "Wrong input, try again.\n";
            return false;
        }
    }
    return true;
}
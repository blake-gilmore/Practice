#include <iostream>
using namespace std;
void deleteRepeats(char letters[], int& numberUsed);
int main()
{
    int numberUsed(0);
    char letters[10];
    cout << "Enter ten letters, input F to cancel: ";
    
    do
    {
        cin >> letters[numberUsed];
        if (letters[numberUsed] == 'F')
            break;
        numberUsed++;
    } while (numberUsed < 10);

    deleteRepeats(letters, numberUsed);

    cout << "The list after repeated letters are repeated is: ";
    for (int i = 0; i < numberUsed; i++)
    {
        cout << letters[i] << " ";
    }
    cout << endl;
    return 0;
}

void deleteRepeats(char letters[], int& numberUsed)
{
    for (int i = 0; i < numberUsed - 1; i++)
    {
        for (int j = i + 1; j < numberUsed; j++)
        {
            if (letters[j] == letters[i])
            {
                for (int index = j; index < numberUsed; index++)
                {
                    letters[index] = letters[index + 1];
                }
                numberUsed--;
            }
        }
    }

    return;
}
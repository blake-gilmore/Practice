#include <iostream>
using namespace std;
const int MAX_ARRAY = 50;
void fillArray(int list[], int size, int& numFilled);
void printColumns(int list[], int numFilled);

int main()
{
    int list[MAX_ARRAY], numCount[MAX_ARRAY][1], numFilled;
    fillArray(list, MAX_ARRAY, numFilled);
    printColumns(list, numFilled);
    return 0;
}
void fillArray(int list[], int size, int& numFilled)
//Preconditions: size is the declared size of the array
//Postcondition: numberUsed is the number of values stored in list
//list[0] through list[numberUsed-1] will be filled with values from user
{
    cout << "Input a list of numbers, input a negative number when finished";
    int next, index = 0;
    cin >> next;
    while ((next >= 0) && index < size)
    {
        list[index] = next;
        index++;
        cin >> next;
    }
    numFilled = index;
    return;
}
void printColumns(int list[], int numFilled)
{
    int count(0);
    bool counted[MAX_ARRAY];
    for (int i = 0; i < numFilled; i++)
    {
        counted[i] = false;
    }
    cout << "N\tCount\n";
    for (int i = 0; i < numFilled; i++)
    {
        count = 0;
        if (counted[i] == false)
        {
            cout << list[i] << "\t";
            count++;
            for (int j = i + 1; j < numFilled; j++)
            {
                if (list[j] == list[i])
                {
                    count++;
                    counted[j] = true;
                }
            }
            cout << count << endl;
        }
    }
}

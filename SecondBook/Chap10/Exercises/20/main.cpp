#include "die.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <sstream> 
using namespace std;
int getLargest(int*, int size);


int main() //Line 1
{
    die dice[4];
    long long timesRolled;
    int tempSum, sumCount(0);
    cout << "Enter the number of times rolled: ";
    cin >> timesRolled;
    int sums[40];
    stringstream results;
    memset(sums, 0, sizeof(sums));
    
    
    for (long long i = 0; i < timesRolled; i++)
    {
        tempSum = 0;
        for (int j = 0; j < 4; j++)
        {
            dice[j].roll();
            tempSum += dice[j].getNum();
        }
        sums[tempSum-4]++;
    }    
    int groupings = 4;
    int groupStart = 0;
    int groupSum[10];
    for (int j = 0; j < 10; j++)
    {
        groupSum[j] = 0;
        for (int i = groupStart; i < (groupStart + groupings); i++)
        {
            groupSum[j] += sums[i];
        }
        groupStart += groupings;
    }

    int percentage = timesRolled * .01;
    int starting = getLargest(groupSum, 10);
    string output;
    cout << endl << endl;
    while ((starting-percentage) >= 0)
    {
        output = to_string(starting - percentage) + "-" + to_string(starting);
        cout << setw(15) << output <<"|";
        for (int i = 0; i < 10; i++)
        {
            if (groupSum[i] >= (starting - percentage))
            {
                cout << setw(10) << "*";
            }
            else    cout << setw(10) << " ";
        }
        cout << endl;
        starting -= percentage;
    }
    cout << setw(19) << " " << "H" << endl;

return 0; 
}

int getLargest(int* largest, int size)
{
    int biggest(0);
    for (int i = 0; i < size; i++)
    {
        if (largest[i]>biggest)
        {
            biggest = largest[i];
        }
    }
    return biggest;
}
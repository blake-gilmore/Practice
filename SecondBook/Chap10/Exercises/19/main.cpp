#include "die.h"
#include <iostream>
using namespace std;
int main() //Line 1
{
    die dice[10];
    long long timesRolled;
    int desiredSum;
    int tempSum, sumCount(0);
    cout << "Enter the number of times rolled: ";
    cin >> timesRolled;

    cout << "Enter the desired sum: ";
    do{
        cin >> desiredSum;
        if (desiredSum < 10 || desiredSum > 60)
        {
            cout << "Invalid. Enter again.\n";
        }
    }while(desiredSum < 10 && desiredSum > 60);

    for (long long i = 0; i < timesRolled; i++)
    {
        tempSum = 0;
        for (int j = 0; j < 10; j++)
        {
            dice[j].roll();
            tempSum += dice[j].getNum();
        }
        if (tempSum == desiredSum)
            sumCount++;
    }

    cout << "For 10 dice rolled " << timesRolled << " times, the number " << desiredSum << " sum was rolled " << sumCount << " times.\n\n";
return 0; 
}
/* algorithm
1. Get integer from user
2. Output individual digits
    Loop
        Divide by 10 until 0. Then % is the digit you output
        Multiply 10 by the counter and subtract that from the number
        Repeat loop
3. Calc sum
5. Output sum
*/
#include <iostream>

using namespace std;

int main()
{
    int counter;
    int userNum;
    bool isOne(false);
    int remainder, tempNum;
    int sum(0);

    cout << "Enter user num: ";
    cin >> userNum;

    while(userNum > 9)
    {
        tempNum = userNum;
        counter = 1;
        while (isOne == false)
        {
            remainder = tempNum % 10;
            tempNum = tempNum / 10;
            if (tempNum == 0)
            {
                cout << remainder;
                sum += remainder;
                isOne = true;
            }
            else
                counter *= 10;
        }
        isOne = false;
        userNum -= counter*remainder;
    }
    cout << userNum;
    sum += userNum;
    cout << endl << sum << endl;
    return 0;
}
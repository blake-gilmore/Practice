#include "dateType.h"
using namespace std;
#include <iostream>

int main()
{
    int tempNum;
    dateType newDate;
    cout << "Enter month: ";
    cin >> tempNum; 
    newDate.setMonth(tempNum);
    cout << "Enter day: ";
    cin >> tempNum;
    newDate.setDay(tempNum);
    cout << "Enter year: ";
    cin >> tempNum;
    newDate.setYear(tempNum);

    cout << "Enter days to add: ";
    cin >> tempNum;
    newDate.addDays(tempNum);
    return 0;
}
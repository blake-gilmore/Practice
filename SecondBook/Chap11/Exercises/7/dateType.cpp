#include "dateType.h"
#include <iostream>
using namespace std;
void dateType::setDate(int month, int day, int year)
{
dMonth = month;
dDay = day;
dYear = year;
}
int dateType::getDay() const
{
return dDay;
}
int dateType::getMonth() const
{
return dMonth;
}
int dateType::getYear() const
{
return dYear;
}
void dateType::printDate() const
{
cout << dMonth << "-" << dDay << "-" << dYear;
}
//Constructor with parameters
dateType::dateType(int month, int day, int year)
{
dMonth = month;
dDay = day;
dYear = year;
}

void dateType::setMonth(int update)
{
    dMonth = update;
    return;
}
void dateType::setDay(int update)
{
    dDay = update;
    return;
}
void dateType::setYear(int update)
{
    dYear = update;
    return;
}
/*
Leap year algorithm:
if the year is divisible by 4?
if (year % 4 == 0) then its a leap year
*/

bool dateType::isLeapYear()
{
    if ((dYear % 4) == 0 && dYear != 2000)
        return true;

    else false;
}

/*
Days in month algorithm
If february
    either 28 if not leap year
    or 28 if leap year
1,3,5,7,8,10,12 are 31
rest not including 2 are 30
if 2
{
    february calculations
}
if less than 8 and and month % 2 == 0, then
{
    has 30
    else has 31
}
if greater than or equal to 8
{
    if month % 2 == 0 then month has 31
    else has 30
} 
*/
int dateType::daysInMonth(int monthCmp)
{
    if (monthCmp == 2)
    {
        if (isLeapYear())
            return 29;
        else
            return 28;
    }
    else if (monthCmp < 8)
    {
        if ((monthCmp % 2) == 0)
            return 30;
        else
            return 31;
    }
    else if (monthCmp >= 8)
    {
        if ((monthCmp % 2) == 0)
            return 31;
        else
            return 30;
    }
}
int dateType::daysInMonth() { return daysInMonth(dMonth); }


/*
daysPassed algorithm
variables:
    runningSum = 0; Used to tell how many days total have passed

1. How many full months? How many days in each of those full months?
    Take current month, subtract 1
    if zero, then no previous months
    otherwise: do
        {
            For every month before current (loop month-1 times)
            Add days of month to running sum
        }
2. Add dDay-1 to running Sum
*/

int dateType::daysPassed()
{
    int runningSum(0);
    if (dMonth-1 > 0)
    {
        for (int i = 1; i < dMonth; i++)
            runningSum+=daysInMonth(i);

    }
    if (dDay - 1 > 0)
        runningSum += (dDay - 1);

    return runningSum;
}

/*
daysRemaining Algorithm
Variables:
runningSum = 0; keeps track of days left in year
1. Find how many months left
2. add days from each month left
3. Subtract days in current month from current day and add to running Sum

*/

int dateType::daysRemaining()
{
    int runningSum(0);

    for (int i = (dMonth + 1); i <= 12; i++)
    {
        runningSum += daysInMonth(i);
    }

    runningSum += (daysInMonth() - dDay);
    return runningSum;
}

/*
addDays algorithm:

variables:
runningMonth; currentMonth in calculation
Steps:
1. Get number of days left in month
2. Subtract days left from days sent to function
3. If negative, then add daysAdded to current date, keep in current month, and print and return
4. Otherwise: Loop through months following current month. Check if the daysInMonth for that month are larger than days left
   If not, then set to that month and the number of days left, then print and return
   Otherwise: subtract daysInMonth from days left and continue to next month
   When continuing to next month, check if next month is 13, if so, set month to 1

*/

void dateType::addDays(int daysAdded)
{
    if ((daysInMonth() - dDay) < daysAdded)
    {
        daysAdded -= (daysInMonth() - dDay);
        nextMonth();
        do
        {
            if (daysInMonth() >= daysAdded)
            {
                dDay = daysAdded;
                break;
            }
            else
            {
                daysAdded -= daysInMonth();
                nextMonth();
            }
        } while (daysAdded > 0);
        
    }
    else
    {
        dDay += daysAdded;
    }

    printDate();
}
void dateType::nextMonth()
{
    dMonth++;
    if (dMonth > 12)
        dMonth = 1;
    return;
}

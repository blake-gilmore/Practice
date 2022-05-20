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
int dateType::daysInMonth()
{
    
}
int dateType::daysPassed()
{

}
int dateType::daysRemaining()
{

}
void dateType::addDays()
{

}
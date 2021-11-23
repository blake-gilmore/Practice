#include <iostream>
#include <cstring>

using namespace std;
bool isLeapYear ( int year);
int getCenturyValue(int year);
int getYearValue (int year);
int getMonthValue (int month, int year);

int main()
{
    int day, year, centuryValue, yearValue, monthValue, sum, month, dayValue;
    bool leapYear;

    cout << "Enter a valid day in the form of 11/20/2021: ";
    cin >> month >> day >> year;

    centuryValue = getCenturyValue(year);
    monthValue = getMonthValue(month, year);
    yearValue = getYearValue(year);

    dayValue = (day + monthValue + yearValue + centuryValue) % 7;
    cout << "The day " << month << "/" << day << "/" << year << " is a ";

    switch (dayValue)
    {
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
    }

    cout << endl;
    return 0;

}

bool isLeapYear ( int year)
{
    if ((year % 400) == 0)
        return true;
    else if (((year % 4) == 0) && ((year % 100) != 0))
        return true;
    else
        return false;
}

int getCenturyValue(int year)
{
    int twoDigits, remainder;
    twoDigits = year / 100;
    remainder = twoDigits % 4;
    return ((3 - remainder) * 2);
}

int getYearValue (int year)
{
    int lastTwo;
    lastTwo = year % 100;
    return ((lastTwo / 4) + lastTwo);
}

int getMonthValue (int month, int year)
{
    bool leapYear = isLeapYear(year);

    switch (month)
    {
        case 1:
            if (leapYear)
                return 6;
            else
                return 0;
            break;
        case 2:
            if (leapYear)
                return 2;
            else
                return 3;
            break;
        case 3:
            return 3;
            break;
        case 4:
            return 6;
            break;
        case 5:
            return 1;
            break;
        case 6:
            return 4;
            break;
        case 7:
            return 6;
            break;
        case 8:
            return 2;
            break;
        case 9:
            return 5;
            break;
        case 10:
            return 0;
            break;
        case 11:
            return 3;
            break;
        case 12:
            return 5;
            break;
    }
    return 0;
}
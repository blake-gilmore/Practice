#include <iostream>
using namespace std;
class Month
{
public:
    Month(char one, char two, char three);
    Month(int num);
    Month();
    void inputMonthNum();
    void inputMonthChars();
    void outputNum();
    void outputName();
    Month returnNext();
private:
    int month;
    void convertCharToNum(char one, char two, char three);
    string convertNumtoChar();
};
int main()
{
    char one, two, three;
    int num;
    cout << "Input three characters: ";
    cin >> one >> two >> three;
    Month firstMonth(one, two, three);
    firstMonth.outputName();
    firstMonth.outputNum();

    cout << "Input number: ";
    cin >> num;
    Month secondMonth(num);
    secondMonth.outputName();
    secondMonth.outputNum();

    Month thirdMonth;
    thirdMonth.outputName();
    thirdMonth.outputNum();

    cout << "Input month name: ";
    thirdMonth.inputMonthChars();
    thirdMonth.outputNum();
    
    cout << "Input num: ";
    thirdMonth.inputMonthNum();
    thirdMonth.outputName();

    Month fourthMonth = thirdMonth.returnNext();
    fourthMonth.outputName();
    fourthMonth.outputNum();
}
Month::Month(char one, char two, char three)
{
    convertCharToNum(one, two, three);
    return;
}
Month::Month(int num)
{
    month = num;
    return;
}
Month::Month()
{
    month = 1;
    return;
}
void Month::inputMonthNum()
{
    cout << "Enter the number for the month: ";
    cin >> month;
    return;
}
void Month::inputMonthChars()
{
    char one, two, three;
    cout << "Enter three characters for the month: ";
    cin >> one >> two >> three;
    convertCharToNum(one, two, three);
    return;
}
void Month::outputNum()
{
    cout << "The month is number " << month;
    return;
}
void Month::outputName()
{
    string name = convertNumtoChar();
    cout << "The month is " << name;
    return;
}
Month Month::returnNext()
{
    if (month < 12)
    {
        Month newMonth(month + 1);
        return newMonth;
    }
    else
    {
        Month newMonth(1);
        return newMonth;
    }
}
void Month::convertCharToNum(char one, char two, char three)
{
    if (one == 'j' && two == 'a')
        month = 1;
    else if (one == 'f')
        month = 2;
    else if (one == 'm' && two == 'a' && three == 'r')
        month = 3;
    else if (one == 'a' && two == 'p')
        month = 4;
    else if (one == 'm' && two == 'a' && three == 'y')
        month = 5;
    else if (one == 'j' && two == 'u' && three == 'n')
        month = 6;
    else if (one == 'j' && two == 'u' && three == 'l')
        month = 7;
    else if (one == 'a' && two == 'u')
        month = 8;
    else if (one == 's')
        month = 9;
    else if (one == 'o')
        month = 10;
    else if (one == 'n')
        month == 11;
    else if (one == 'd')
        month == 12;

    return;
}
string Month::convertNumtoChar()
{
    if (month ==1)
        return "jan";
    else if (month == 2)
        return "feb";
    else if (month == 3)
        return "mar";
    else if (month == 4)
        return "apr";
    else if (month == 5)
        return "may";
    else if (month == 6)
        return "jun";
    else if (month == 7)
        return "jul";
    else if (month == 8)
        return "aug";
    else if (month == 9)
        return "sep";
    else if (month == 10)
        return "oct";
    else if (month == 11)
        return "nov";
    else if (month == 12)
        return "dec";

    return "ya";
}

#include "dayType.h"
#include <iostream>

dayType::dayType(string newDay)
{
    set(newDay);
    return;
}
void dayType::set(string newDay)
{
    dayOfWeek = newDay;
    return;
}
void dayType::printDay() const
{
    using std::cout;
    using std::endl;
    cout << "The day of the week is " << dayOfWeek << endl;
    return;
}
string dayType::getDay() const
{
    return dayOfWeek;
}
string dayType::getPreviousDay() const
{
    int num;
    for (int i = 0; i < 7; i ++)
    {
        if (dayOfWeek == days[i])
        {
            if (i == 0)
                num = 6;
            else
                num = (i - 1);
            break;
        }
    }
    return days[num];
}
string dayType::getNextDay() const
{
    int num;
    for (int i = 0; i < 7; i ++)
    {
        if (dayOfWeek == days[i])
        {
            if (i == 6)
                num = 0;
            else
                num = (i + 1);
            break;
        }
    }
    return days[num];
}
string dayType::getByAdding(int addToDay) const
{
    int num;
    for (int i = 0; i < 7; i++)
    {
        if (dayOfWeek == days[i])
        {
            num = i;
            break;
        }
    }
    num += addToDay;
    num = num % 7;
    return (days[num]);
}
dayType dayType::operator++(int)
{
    dayType tempDay = *this;

}
dayType dayType::operator++()
{
    
}
dayType dayType::operator--(int)
{

}
dayType dayType::operator--()
{

}
bool dayType::operator ==(const dayType&) const
{

}
bool dayType::operator !=(const dayType&) const
{

}
std::ostream& dayType::operator <<(const std::ostream& os)
{

}
std::istream& dayType::operator >>(const std::istream& is)
{

}
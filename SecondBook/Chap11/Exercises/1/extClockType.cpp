#include "extClockType.h"
#include <string>

extClockType::extClockType(int newSeconds, int newMinutes, int newHour, std::string newZone):clockType()
{
    timeZone = newZone;
}
void extClockType::setTimeZone(std::string newZone)
{
    timeZone = newZone;
}
std::string extClockType::getTimeZone() const
{
    return timeZone;
}

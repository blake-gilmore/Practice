#include "clockType.h"

void clockType::setSeconds(int newSeconds)
{
    seconds = newSeconds;
}
void clockType::setMinutes(int newMinutes)
{
    minutes = newMinutes;
}
void clockType::setHour(int newHour)
{
    hours = newHour;
}
int clockType::getSeconds() const
{
    return seconds;
}
int clockType::getMinutes() const { return minutes;}
int clockType::getHour() const { return hours;}
void clockType::setClock(int newSeconds, int newMinutes, int newHour)
{
    seconds = newSeconds;
    minutes = newMinutes;
    hours = newHour;
}
clockType::clockType(int newSeconds, int newMinutes, int newHour)
{
    setClock(newSeconds, newMinutes, newHour);
}
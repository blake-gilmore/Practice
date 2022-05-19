/*In Chapter 10, the class clockType was designed to implement the time
of day in a program. Certain applications, in addition to hours, minutes, and
seconds, might require you to store the time zone. Derive the class
extClockType from the class clockType by adding a member variable
to store the time zone. Add the necessary member functions and constructors
to make the class functional. Also, write the definitions of the member
functions and the constructors. Finally, write a test program to test
your class.
*/

#include "clockType.h"
#include <iostream>

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
int clockType::secondsElapsed() const
{
    int secondCount(0);
    secondCount += (hours*60*60) + (minutes * 60) + seconds;
    return secondCount;
}

int clockType::remainingTime() const
{
    return (24*60*60 - secondsElapsed());
}

void clockType::compareClocks(clockType& otherClock) const
{
    using std::cout;
    using std::endl;
    int hourDiff, minuteDiff, secondDiff;
    hourDiff = hours-otherClock.hours;
    minuteDiff = minutes-otherClock.minutes;
    secondDiff = seconds-otherClock.seconds;

    if (hourDiff < 0)
        hourDiff *= -1;
    if (minuteDiff < 0)
        minuteDiff *= -1;
    if (secondDiff < 0)
        secondDiff *= -1;

    cout << hourDiff << ":" << minuteDiff << ":" << secondDiff << endl;
    return;
}

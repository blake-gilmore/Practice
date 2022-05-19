/*In Chapter 10, the class clockType was designed to implement the time
of day in a program. Certain applications, in addition to hours, minutes, and
seconds, might require you to store the time zone. Derive the class
extClockType from the class clockType by adding a member variable
to store the time zone. Add the necessary member functions and constructors
to make the class functional. Also, write the definitions of the member
functions and the constructors. Finally, write a test program to test
your class.*/
#ifndef EXTCLOCK_H
#define EXTCLOCK_H
#include "clockType.h"
#include <string>

class extClockType: public clockType
{
public:
    extClockType(int = 0, int = 0, int = 0, std::string = "");
    void setTimeZone(std::string);
    std::string getTimeZone() const;
private:
    std::string timeZone;
};


#endif
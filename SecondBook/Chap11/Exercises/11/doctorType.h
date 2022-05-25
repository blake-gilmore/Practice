/*8a. Design the class doctorType, inherited from the class
personType, defined in Chapter 10, with an additional data member
to store a doctor’s speciality. Add appropriate constructors and mem-
ber functions to initialize, access, and manipulate the data members.*/
#ifndef DOCTORTYPE_H
#define DOCTORTYPE_H
#include "personType.h"
#include <string>
class doctorType: public personType
{
public:
    doctorType();
    void setSpecialty(string);
    string getSpecialty();

private:
    string specialty;
};
#endif
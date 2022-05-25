#include "doctorType.h"
doctorType::doctorType(): personType()
{
    return;
}
void doctorType::setSpecialty(string inSpec)
{
    specialty = inSpec;
    return;
}
string doctorType::getSpecialty()
{
    return specialty;
}
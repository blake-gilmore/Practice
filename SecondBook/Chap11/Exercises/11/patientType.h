/*c. Design the class patientType, inherited from the class personType,
defined in Chapter 10, with additional data members to store a patient’s ID,
age, date of birth, attending physician’s name, the date when the patient was
admitted in the hospital, and the date when the patient was discharged from
the hospital. (Use the class dateType to store the date of birth, admit
date, discharge date, and the class doctorType to store the attending
physician’s name.) Add appropriate constructors and member functions to
initialize, access, and manipulate the data members.
Write a program to test your classes.*/
#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H
#include "personType.h"
#include "dateType.h"
#include <string>
#include "doctorType.h"
#include "billType.h"

class patientType: public personType
{
public:
    patientType();
    void setPatient(doctorType&, dateType& dateOfBirth, dateType& dateAdmitted, dateType&dateDischarged, billType&, std::string, std::string);
    void printInfo();
    void printDoctorInformation();
    void printDateOfBirth();
    void printDateAdmitted();
    void printDateDischarged();
    void printBill();
private:
    doctorType doctor;
    dateType dateOfBirth;
    dateType dateAdmitted;
    dateType dateDischarged;
    billType bill;
};
#endif
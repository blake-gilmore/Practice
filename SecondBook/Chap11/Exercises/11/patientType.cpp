#include "patientType.h"

patientType::patientType()
{
    return;
}
void patientType::setPatient(doctorType& inDoctor, dateType& indateOfBirth, dateType& indateAdmitted, dateType&indateDischarged, billType& inBill, std::string inFirst, std::string inLast)
{
    doctor = inDoctor;
    dateOfBirth = indateOfBirth;
    dateAdmitted = indateAdmitted;
    dateDischarged = indateDischarged;
    bill = inBill;
    setName(inFirst, inLast);
    return;
}
void patientType::printInfo()
{
    personType::print();
    doctor.print();
    dateOfBirth.printDate();
    dateAdmitted.printDate();
    dateDischarged.printDate();
    bill.printInfo();
    return;
}

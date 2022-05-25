
/*b. Design the class billType with data members to store a patient’s ID
and a patient’s hospital charges, such as pharmacy charges for medicine,
doctor’s fee, and room charges. Add appropriate constructors and
member functions to initialize, access, and manipulate the data members.*/

#ifndef BILLTYPE_H
#define BILLTYPE_H
#include <string>
class billType
{
public:
    billType();
    void setPatientId(std::string);
    void updateCharge(double);
    
private:
    std::string patientId;
    double charges; 
};
#endif BILLTYPE_H
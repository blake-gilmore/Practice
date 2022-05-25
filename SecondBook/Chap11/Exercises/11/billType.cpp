#include "billType.h"
#include <iostream>

billType::billType()
{
    patientId = "";
    charges = 0;
    return;
}
void billType::setPatientId(std::string inPatientId)
{
    patientId = inPatientId;
    return;
}
void billType::updateCharge(double chargeUpdate)
{
    charges += chargeUpdate;
    return;
}

void billType::printInfo()
{
    std::cout << "Patient ID: " << patientId << "\nCharges on account: " << charges << std::endl;
    return;
}
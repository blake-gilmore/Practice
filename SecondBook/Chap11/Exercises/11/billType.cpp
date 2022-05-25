#include "billType.h"

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

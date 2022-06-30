/*Define a class addressType that can store a street address, city, state,
and ZIP code. Use the appropriate functions to print and store the
address. Also, use constructors to automatically initialize the member
variables.*/
#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H
#include <string>
class addressType
{
public:
    addressType(std::string = "", std::string = "", std::string = "", std::string = "");
    void printInformation();
    void setAddress(std::string);
    void setCity(std::string);
    void setState(std::string);
    void setZipCode(std::string);

protected:
    std::string address, city, state, zipCode;
};
#endif
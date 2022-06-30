/*Define a class extPersonType using the class personType (as
defined in Example 10-10, Chapter 10), the class dateType (as designed
in this chapter’s Programming Exercise 2), and the class addressType.
Add a member variable to this class to classify the person as a family
member, friend, or business associate. Also, add a member variable to store
the phone number. Add (or override) the functions to print and store the
appropriate information. Use constructors to automatically initialize the
member variables.*/

#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H
#include "addressType.h"
#include "personType.h"
#include "dateType.h"
#include <string>
#include "fstream"
#include "iostream"

using namespace std;
class extPersonType: public personType, public addressType, public dateType
{
public:
    extPersonType(string = "", string = "");
    void printInformation();
    void setType(string inType){type = inType;}
    void setPhoneNumber(string inNumber){phoneNumber = inNumber;}
    void setInformation();
    friend ostream& operator << (ostream&, extPersonType&);
protected:
    string type;
    string phoneNumber;
};
#endif
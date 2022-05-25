/*In this exercise, you will design various classes and write a program to
computerize the billing system of a hospital.
a. Design the class doctorType, inherited from the class
personType, defined in Chapter 10, with an additional data member
to store a doctor’s speciality. Add appropriate constructors and mem-
ber functions to initialize, access, and manipulate the data members.
b. Design the class billType with data members to store a patient’s ID
and a patient’s hospital charges, such as pharmacy charges for medicine,
doctor’s fee, and room charges. Add appropriate constructors and
member functions to initialize, access, and manipulate the data members.
c. Design the class patientType, inherited from the class personType,
defined in Chapter 10, with additional data members to store a patient’s ID,
age, date of birth, attending physician’s name, the date when the patient was
admitted in the hospital, and the date when the patient was discharged from
the hospital. (Use the class dateType to store the date of birth, admit
date, discharge date, and the class doctorType to store the attending
physician’s name.) Add appropriate constructors and member functions to
initialize, access, and manipulate the data members.
Write a program to test your classes.*/
#include "patientType.h"
#include <iostream>
#include <string>
using namespace std;
void getUserInput(patientType&);

int main()
{
    patientType newPatient;
    getUserInput(newPatient);

    newPatient.printInfo();
    return 0;
}
void getUserInput(patientType& newPatient)
{
    string first, second;
    doctorType tempDoctor;
    //Doctor information
    cout << "Enter doctor first name: ";
    cin >> first;
    cout << "Enter doctor last name";
    cin >> second;
    tempDoctor.setName(first, second);

    billType tempBill;
    cout << "Enter patient ID: ";
    cin >> first;
    tempBill.setPatientId(first);

    dateType tempBirth;
    cout << "Enter month of birth, day, and year";
    int num1, num2, num3;
    cin >> num1>> num2>> num3;
    tempBirth.setDate(num1, num2, num3);

    dateType admitted;
    cout << "Enter month, day, year admitted";
    cin >> num1>> num2>> num3;
    admitted.setDate(num1, num2, num3);

    dateType discharged;
    cout << "Enter month, day, year admitted";
    cin >> num1>> num2>> num3;
    discharged.setDate(num1, num2, num3);

    cout << "Enter patient first and last name: ";
    cin >> first >> second;

    newPatient.setPatient(tempDoctor, tempBirth, admitted, discharged, tempBill, first, second);
    return;

}
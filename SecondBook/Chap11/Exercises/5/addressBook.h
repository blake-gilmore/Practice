/*Define the class addressBookType using the previously defined
classes. An object of the type addressBookType should be able to
process a maximum of 500 entries.
The program should perform the following operations:
i. Load the data into the address book from a disk.
ii. Sort the address book by last name.
iii. Search for a person by last name.
iv. Print the address, phone number, and date of birth (if it exists) of a
given person.
v. Print the names of the people whose birthdays are in a given month.
vi. Print the names of all the people between two last names.
vii. Depending on the user’s request, print the names of all family
members, friends, or business associates.*/

#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include "extPersonType.h"
#include <iostream>

class addressBook
{
public:
    addressBook();
    void loadData(ifstream&);
    void printData();
    void searchPerson(string);

private:
    extPersonType people[500];
    int numAddresses;
    void sortData();
};

#endif
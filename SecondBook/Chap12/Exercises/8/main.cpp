/*Extend the definition of the class newString as follows:
ii. Add the function length to return the length of the string.
b. Write the definition of the function to implement the operations defined
in part a.
c. Write a test program to test various operations on the newString objects*/


#include "newString.h"
#include <iostream>
int main()
{
    newString stringOne("Hello");
    newString stringTwo("World");

    std::cout << stringOne + " " + stringTwo << std::endl;

    stringOne += " ";
    stringOne += stringTwo;
    std::cout << stringOne << std::endl;

    std::cout << "The length of stringOne is now: " << stringOne.length() << std::endl;
    return 0;
}
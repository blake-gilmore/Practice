/*Programming Exercise 11 in Chapter 8 explains how to add large integers using
arrays. However, in that exercise, the program could add only integers of, at
most, 20 digits. This chapter explains how to work with dynamic integers.
Design a class named largeIntegers such that an object of this class can
store an integer of any number of digits. Add operations to add, subtract,
multiply, and compare integers stored in two objects. Also add constructors
to properly initialize objects and functions to set, retrieve, and print the values
of objects.


*/
#include <iostream>
#include "largeIntegers.h"
int main()
{
    largeIntegers firstInt;
    largeIntegers secondInt;
    largeIntegers sumInt;

    firstInt.setInteger("1546");
    secondInt.setInteger("2");
    sumInt.addIntegers(firstInt, secondInt);

    sumInt.print();
    return 0;
}
/*Write a recursive function that returns true if the digits of a positive integer
are in increasing order; otherwise, the function returns false. Also, write a
program to test your function*/
#include <iostream>
bool isIncreasing(int);
int main()
{
    std::cout << "Enter a positive integer: ";
    int integer;
    std::cin >> integer;

    if (isIncreasing(integer))
        std::cout << "Yes!";
    else
        std::cout << "No.";
    return 0;
}
bool isIncreasing(int integer)
{
    int tempInt;
    if (integer < 10)
        return true;
    else if (integer < 100)
    {
        tempInt = integer % 10;
        integer /= 10;
        if (tempInt > integer)
            return true;
        else return false;
    }
    else if (isIncreasing (integer / 10))
        return ((integer % 10 > (integer /10 % 10)));
    else return false;
}
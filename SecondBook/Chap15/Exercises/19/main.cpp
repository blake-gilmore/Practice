#include <iostream>
#include <cmath>
double squareRoot(double, double);
int main()
{
    std::cout << "enter number:";
    double number;
    std::cin >> number;

    std::cout << "The square root is " << squareRoot(number, number) << std::endl;
    
    
    return 0;
}

double squareRoot(double num, double a)
{
    if (abs(a*a - num) <= .0000000000000000000000000000001)
        return a;
    else
        return (squareRoot(num, (a*a + num) / (2*a)));
}
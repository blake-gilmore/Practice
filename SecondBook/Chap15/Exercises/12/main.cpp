#include <iostream>
int gcd(int, int);
int main()
{

    std::cout << "Enter integer x and y: ";
    int x, y;
    std::cin >> x >> y;
    std::cout << "The greatest common denominator is " << gcd(x,y) << std::endl;
    
    
    
    return 0;
}

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return (gcd(y, x%y));
}
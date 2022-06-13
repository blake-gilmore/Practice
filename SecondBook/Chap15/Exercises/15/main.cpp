#include <iostream>
int multiplication(int, int);
int main()
{
    int first, second;
    std::cout << "Enter first and second:";
    std::cin >> first >> second;
    std::cout << "Them multiplied is equal to " << multiplication(first, second);
    
    
    return 0;
}
int multiplication(int first, int second)
{
    if (second == 1)
        return first;
    else return (first + multiplication(first, second-1));
}
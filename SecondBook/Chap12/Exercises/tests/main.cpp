#include <iostream>
#include <string>

int main()
{
    try
    {
        std::string str1 = "Hello ";
        std::string str2 = str1.substr(10, 20);
    }
    catch (std::out_of_range re)
    {
        std::cout << "Out of range!";
    }
    return 0;
}
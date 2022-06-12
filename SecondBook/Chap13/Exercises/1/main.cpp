#include <iostream>

int main()
{
    int num1, num2;
    bool done(false);
    do
    {
        try
        {
            std::cin >> num1 >> num2;
            if (num1 < 0 || num2 < 0)
                throw 0;
            done = true;
        }
        catch(int)
        {
            std::cout << "Can't have negative number. Enter a new one: ";
        }
    }while (!done);
    
    
    return 0;
}
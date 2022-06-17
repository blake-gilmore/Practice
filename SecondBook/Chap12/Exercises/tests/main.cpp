#include <iostream>
#include <string>
class divByZero
{
public:
    divByZero(){message = "Bye Bye";}
    void what(){std::cout << message << std::endl;}
private:
    std::string message;
};
void do_division(int num1, int num2)
{

    if (num2 == 0)
        throw divByZero();
    
}
int main()
{
    try{
        do_division(5,0);
    }
    catch(divByZero div)
    {
        div.what(); 
    }
    return 0;
}
#include <iostream>
using std::cout;
using std::cin;
typedef int* intPtr;
class Polynomial
{
public:
    Polynomial& operator = (const Polynomial& rtSide);
    Polynomial (const Polynomial& old);
    Polynomial
private:
    intPtr* values;
};
int main()
{

}
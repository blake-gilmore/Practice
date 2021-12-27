#include <iostream>
using namespace std;
class New
{
public:
    New(int num);
    New& operator = (New num);
    int num2;
private:
};
int main()
{
    New* newptr = new New(15);
    New main(5), main2(10);
    main = main2 = *newptr;
    cout << main.num2;

    return 0;
}
New::New(int num)
{
    num2 = num;
    return;
}
New& New::operator = (New num)
{
    num2 = num.num2;
    return *this;
}
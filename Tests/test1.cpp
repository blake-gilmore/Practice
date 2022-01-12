#include <iostream>
using std::cout;

class Test
{
public:
    Test();
    Test(int num);
    void printTest();
private:
    int number;
};

int main()
{
    Test newTest;
    newTest.printTest();
    return 0;
}

Test::Test():Test(5)
{
    //Blank
}
Test::Test(int num)
{
    number = num;
}
void Test::printTest()
{
    cout << number;
}
#include <iostream>
using namespace std;
class myClass
{
public:
    static int counter;
    void printCounter() const;

private:

};
int myClass::counter = 0;

void myClass::printCounter() const
{
    cout << "Counter is " << counter << endl;
}

int main()
{
    myClass newClass;

    myClass::counter++;
    newClass.counter++;
    newClass.printCounter();

    return 0;
}
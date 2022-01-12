#include <iostream>

using namespace std;


class first
{
public:
    void printFirst();
    virtual void printSecond();
private:

};
class second: public first
{
public:
    virtual void printSecond();
private:

};

int main()
{
    second newClass;
    first newNew;
    newClass.printFirst();
    newNew.printFirst();
    return 0;
}
void first::printFirst()
{
    printSecond();
}
void first::printSecond()
{
    cout << "This is the first.";
}
void second::printSecond()
{
    cout << "This is the second.";
}
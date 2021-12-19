#include <iostream>
using namespace std;
class Number
{
public: 
    int number;
    int& getNumber();
    void setNumber();
};
int main()
{
    int x;
    Number num;
    num.setNumber();
    x = num.getNumber();
    cout << x << endl;
    cin >> x;
    cout << num.number;
    int y = num.getNumber();
    cout << y << endl;
    return 0;
}
int& Number::getNumber()
{
    return number;
}
void Number::setNumber()
{
    number = 5;
}
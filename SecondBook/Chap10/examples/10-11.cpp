#include <iostream>

using namespace std;
class illustrate
{
public:
    static int count;
    void print() const;
    void setX(int a);
    static void incrementY();
    illustrate(int a = 0);
private:
    int x;
    static int y;
};

int illustrate::count = 0;
int illustrate::y = 0;

void illustrate::print() const
{
    cout << "x = " << x << ", y = " << y << ", count = " << count << endl;
}

void illustrate::setX(int a)
{
    x = a;
}

void illustrate::incrementY()
{
    y++;
}

illustrate::illustrate(int a)
{
    x = a;
}
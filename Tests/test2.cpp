#include <iostream>
using std::cout;
void recurse(int num);
int main()
{
    recurse(5);
    return 0;
}

void recurse(int num)
{
    if (num == 1)
    {
        cout << "*";
        return;
    }
    else
    {
        recurse(num - 1);
        cout << "*";
        return;
    }
}
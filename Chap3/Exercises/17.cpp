#include <iostream>
using namespace std;

void sum(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers";
    cin >> num1 >> num2 >> num3;

    sum(num1, num2, num3);

    for (int i = 0; i < 3; i++)
{
    int x = 0;
    cout << x;
    for (int j = 0; j < 3; j++)
    {
        cout << i;
    }
}
    return 0;
}

void sum(int num1, int num2, int num3)
{
    cout << (num1 + num2 + num3);
}



//number is number wanting to get square root of
//computes and returns the square root of the number
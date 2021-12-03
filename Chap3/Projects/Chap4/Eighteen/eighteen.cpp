#include <iostream>
using namespace std;
void sort(int& num1, int& num2, int& num3);

int main()
{
    int num1, num2, num3;
    cout << "enter three integers: ";
    cin >> num1 >> num2 >> num3;

    sort(num1, num2, num3);

    cout << "In the proper order, it now goes " << num1 << num2 << num3 << endl;

    return 0;
}

void sort(int& num1, int& num2, int& num3)
{
    int temp;

    for (int i = 0; i < 3; i++)
    {
        if (num1 > num2)
        {
            temp = num2;
            num2 = num1;
            num1 = temp;
        }
        if (num2 > num3)
        {
            temp = num3;
            num3 = num2;
            num2 = temp;
        }
    }

    return;
    
}
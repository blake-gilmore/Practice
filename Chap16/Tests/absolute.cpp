#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template<class T>
T absolute(T num);

int main()
{
    float num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The absolute value of that number is: " << absolute(num) << endl;
    return 0;
}

template<class T>
T absolute(T num)
{
    if (num < 0)
    {
        return -num;
    }
    else
        return num;
}
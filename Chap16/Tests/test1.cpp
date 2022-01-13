#include <iostream>
using std::cout;
using std::cin;
using std::endl;
template<class T>
T maximum(T num1, T num2);

int main()
{
    double num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cin >> num2;
    cout << "The biggest number is " << maximum(num1, num2) << endl;
    return 0;
}

template<class T>
T maximum(T num1, T num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
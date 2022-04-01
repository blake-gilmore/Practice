#include <iostream>
using namespace std;

int main()
{
    string one, two, three;

    cout << "Enter three strings: ";
    cin >> one >> two >> three;

    //permutations
    cout << one <<two <<three;
    cout << endl;
    cout << one << three << two;
    cout << endl;
    cout << two << one << three;
    cout << endl;
    cout << two << three << one;
    cout << endl;
    cout << three << one << two;
    cout << endl;
    cout << three << two << one;
    cout << endl;

    return 0;
}
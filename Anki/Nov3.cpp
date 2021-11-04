#include <iostream>

using namespace std;

int main()
{
    unsigned short Val1 = 2;
    unsigned int Val2 = 3;
    unsigned long Val3 = 56000;

    cout << Val1;
    cout << Val2;
    cout << Val3;

    cout << "\n";

    int feet = 0;
    int inches = 0;

    int feet2 (0);
    int inches2 (0);

    cout << feet;
    cout << feet2;
    cout << inches;
    cout << inches2;
    
    int one (3), two, three (4);

    cout << one;
    cout << three;

    cin >> one;

    cout << one;
    cout << "\n";

    decltype (one*3.5) four = one;

    cout << four;
    cout << "\n";

    int count = 0;

    double distance = 1.5;


    return 0;
}
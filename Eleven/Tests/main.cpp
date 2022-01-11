#include "second.h"
#include <iostream>
using namespace std;

int main()
{
    Numbers num;
    cout << "num 1 and 2: ";
    cin >> num.num1 >> num.num2;
    cout << endl << num.addTwo();
    return 0;
}
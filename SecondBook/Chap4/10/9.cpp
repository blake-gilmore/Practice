#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double one, two;
    char op;
    double result;
    bool isFalse(true);
    cout << "Enter calculation: ";
    cin >> one >> op >> two;

    if (op == '+')
    {   
        result = one+two;
    }
    else if (op == '-')
    {
        result = one - two;
    }
    else if (op == '/')
    {
        if (two == 0)
        {
            cout << "Can't divide by 0." << endl;
            isFalse = false;
            
        }
        else
        {
            result = one / two;
        }
    }
    else if (op == '*')
    {
        result = one * two;
    }

    if (isFalse == true)
    {
        cout << fixed << showpoint << setprecision(2);
        cout << "The result is " << result << endl;
    }
    return 0;
}
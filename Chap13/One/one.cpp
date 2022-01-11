#include <iostream>
using std::cout;
using std::endl;
using std:: cin;
int fibonnaci(int n);

int main()
{
    int n;
    int fib;
    cout << "Enter a number you want the fibonnaci number of: ";
    cin >> n;
    fib = fibonnaci(n);
    cout << "The fibonnaci number is " << fib << endl;
    return 0;
}

int fibonnaci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else 
    {
        return (fibonnaci(n-2) + fibonnaci(n-1));
    }
}
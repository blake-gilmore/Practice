#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "Enter degrees Celsius to be turned to Fahrenheit: ";
    cin >> celsius;

    fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    cout << "\n" << celsius << "degrees Celsius converts to " << fahrenheit << " degrees Fahrenheit. \n";


}
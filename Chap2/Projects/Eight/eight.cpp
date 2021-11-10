#include <iostream>
using namespace std;

int main()
{
    int celsius = 100;
    int fahrenheit = 0;
    
    while (celsius > -273)
    {
        fahrenheit = (9.0 / 5.0) * celsius + 32;

        if (fahrenheit == celsius)
        {
            cout << fahrenheit << " degrees fahrenheit is the same as " << celsius << " degrees celsius.";
            break;
        }

        celsius--;
    }

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    double discriminant, sqRoot;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    if (discriminant < 0)
        cout << "Two complex roots.\n";
    else
        if (discriminant == 0)
            cout << "Single root.\n" << "Root is 0\n";
        else 
        {
            cout << "Two real roots.\n";
            
            sqRoot = sqrt(discriminant);
            cout << "The two roots are " << sqRoot << " and " << -sqRoot;
        }
        
    return 0;
}
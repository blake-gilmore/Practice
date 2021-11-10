#include <iostream>
using namespace std;

int main()
{
    double volume;
    double weight;
    double radius;
    double buoyantForce;
    const double WATER_WEIGHT = 62.4;

    cout << "Enter the weight of the submerged object: ";
    cin >> weight;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0/3.0) * 3.14159265358979323846 * radius * radius * radius;

    buoyantForce = volume * WATER_WEIGHT;

    if (buoyantForce >= weight)
    {
        cout << "The object floats!";
    }
    else
    {
        cout << "The object sinks :(";
    }

    return 0;
}
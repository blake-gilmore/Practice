#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const double K = 6.67e-8;

    double distance, mass1, mass2, force;

    cout << "Enter distance, mass1, and mass2: ";
    cin >> distance >> mass1 >> mass2;

    force = K * (mass1*mass2 / (distance*distance));
    cout << "Force: " << force << endl;

    return 0;
}
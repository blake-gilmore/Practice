#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(10);

    const double oneTon = 35273.92;
    double cerealPackage;
    double cerealTon;
    double boxesInTon;
    
    cout << "Enter the wieght of the cereal package in ounces: ";
    cin >> cerealPackage;

    cerealTon = cerealPackage / oneTon;

    cout << "The " << cerealPackage << " ounce package of cereal is equal to " << cerealTon << " metric tons.\n";

    cout.precision(2);

    boxesInTon = oneTon / cerealPackage;

    cout << "You will need " << boxesInTon << " boxes of cereal to make up one metric ton of cereal.";

    return 0;
}
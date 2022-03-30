#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;


    double capacity, mpg;
    double miles;

    cout << "Enter the capacity in gallons: ";
    cin >> capacity;

    cout << "Enter the mpg: ";
    cin >> mpg;

    miles = capacity*mpg;

    cout << "You can drive " << miles << " miles with that many gallons.";

    return 0;
}
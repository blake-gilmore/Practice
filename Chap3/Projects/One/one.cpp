#include <iostream>
using namespace std;

const double GALLONS_TO_LITERS = 0.264179;

double milesPerGallon(double miles, double gallons);

int main()
{
    double litersUsed = 0.0;
    double milesTravelled = 0.0;
    double mpg;

    do
    {

        cout << "Enter the number of liters of gas used while travelling, if you want to end the program, enter zero: ";
        cin >> litersUsed;

        if (litersUsed == 0)
        {
            break;
        }

        cout << "Enter the number of miles travelled on the trip: ";
        cin >>milesTravelled;

        mpg = milesPerGallon(milesTravelled, litersUsed);

        cout << "On your trip, your car used up " << mpg << " miles per gallon." << endl;

    } while (litersUsed > 0);
}

double milesPerGallon(double miles, double liters)
{
    double gallonsUsed = 0.0;
    gallonsUsed = liters * GALLONS_TO_LITERS;

    return (miles / gallonsUsed);
}
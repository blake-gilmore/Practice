#include <iostream>
using namespace std;
class Odometer
{
public:
    void resetOdometer();
    void setFuelEfficiency(double set);
    void addMiles(double miles);
    double getGallonsUsed();
    double getMiles();

private:
    double milesDriven, fuelEfficiency, gallonsUsed;
    void calcGallonsUsed();
};
int main()
{
    double temp;
    Odometer car;
    car.resetOdometer();
    cout << "Enter fuel efficiency: ";
    cin >> temp;
    car.setFuelEfficiency(temp);
    cout << "How many miels driven?";
    cin >> temp;
    car.addMiles(temp);
    cout << "More miles?";
    cin >> temp;
    car.addMiles(temp);
    cout << car.getMiles() << " miles used  and " << car.getGallonsUsed() << " gallons used.\n";
    return 0;
}
void Odometer::resetOdometer()
{
    gallonsUsed = 0;
    milesDriven = 0;
    return;
}
void Odometer::setFuelEfficiency(double set)
{
    fuelEfficiency = set;
    return;
}
void Odometer::addMiles(double miles)
{
    milesDriven+=miles;
    calcGallonsUsed();
    return;
}
double Odometer::getGallonsUsed()
{
    return gallonsUsed;
}
void Odometer::calcGallonsUsed()
{
    gallonsUsed = fuelEfficiency * milesDriven;

}
double Odometer::getMiles()
{
    return milesDriven;
}
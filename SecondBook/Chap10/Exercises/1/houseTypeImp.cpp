#include "houseType.h"

int houseType::getNumOfBedrooms() const
{
    return numOfBedrooms;
}
int houseType::getNumOfBathrooms() const
{
    return numOfBathrooms;
}
int houseType::getNumOfCarsGarage() const
{
    return numOfCarsGarage;
}
int houseType::getYearBuilt() const
{
    return yearBuilt;
}
int houseType::getFinishedSquareFootage()const
{
    return finishedSquareFootage;
}
double houseType::getPrice()const
{
    return price;
}
double houseType::getTax()const
{
    return tax;
}
void houseType::setStyle(string newStyle)
{
    style = newStyle;
    return;
}
void houseType::setNumOfBedrooms(int newBed)
{
    numOfBedrooms = newBed;
    return;
}
void houseType::setNumOfBathrooms(int newBath)
{
    numOfBathrooms = newBath;
    return;
}
void houseType::setNumOfCarsGarage(int newCar)
{
    numOfCarsGarage = newCar;
    return;
}
void houseType::setYearBuilt(int newYear)
{
    yearBuilt = newYear;
    return;
}
void houseType::setFinishedSquareFootage(int newSquare)
{
    finishedSquareFootage = newSquare;
    return;
}
void houseType::setPrice(int newPrice)
{
    price = newPrice;
    return;
}
void houseType::setTax(int newTax)
{
    tax = newTax;
    return;
}

houseType::houseType(string newStyle, int newBed, int newBath, int newCar, int newYear, int newSquare, double newPrice, double newTax)
{
    style = newStyle;
    numOfBedrooms = newBed;
    numOfBathrooms = newBath;
    yearBuilt = newYear;
    numOfCarsGarage = newCar;
    finishedSquareFootage = newSquare;
    price = newPrice;
    tax = newTax;

    return;
}

void houseType::printData() const
{
    using std::fixed;
    using std:: showpoint;
    using std::setprecision;
    cout << fixed << showpoint << setprecision(2);

    cout << "The house has the following data: " << endl;
    cout << "Style: " << style << endl;
    cout << "Number of Bedrooms: " << numOfBedrooms << endl;
    cout << "Number of Bathrooms: " << numOfBathrooms << endl;
    cout << "Year Built: " << yearBuilt << endl;
    cout << "Number of Cars to the Garage: " << numOfCarsGarage << endl;
    cout << "Square Footage: " << finishedSquareFootage << endl;
    cout << "Price: " << price << endl;
    cout << "Tax: " << tax << endl;

    return;
}

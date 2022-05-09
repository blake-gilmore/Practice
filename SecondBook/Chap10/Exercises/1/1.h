//house type class
#include <iostream>
#include <string>
#include <iomanip>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class houseType
{
public:
    string getStyle() const;
    int getNumOfBedrooms() const;
    int getNumOfBathrooms() const;
    int getNumOfCarsGarage() const;
    int getYearBuilt() const;
    int getFinishedSquareFootage()const;
    double getPrice()const;
    double getTax()const;
    void setStyle(string newStyle);
    void setNumOfBedrooms(int newBed);
    void setNumOfBathrooms(int newBath);
    void setNumOfCarsGarage(int newCar);
    void setYearBuilt(int newYear);
    void setFinishedSquareFootage(int newSquare);
    void setPrice(int newPrice);
    void setTax(int newTax);
    void printData();

    //Constructor
    houseType(string = "", int = 0, int = 0, int = 0, int = 0, int = 0, double = 0, double = 0);


private:
    string style;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfCarsGarage;
    int yearBuilt;
    int finishedSquareFootage;
    double price;
    double tax;
};

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
}


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

void houseType::printData()
{
    cout << fixed << showpoint << setPrecision(2);

    cout << "The house has the following data: " << endl;
}

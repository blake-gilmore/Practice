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
    void setPrice(double newPrice);
    void setTax(double newTax);
    void printData() const;

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



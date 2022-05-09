#include <string>
using std::string;

class inventory
{
public:
    inventory();
    inventory(string);
    inventory(string, int, double);
    inventory(string, int, double, int);
    //can all just be
    inventory(string = "", int = 0, double  = 0.0, int = 0);

private:
    string name;
    int itemNum;
    double price;
    int unitsInStock;
};

inventory::inventory()
{
    name = "";
    itemNum = -1;
    price = 0.0;
    unitsInStock = 0;
}

inventory item1;
inventory item2("Dryer");
inventory item3("Washer", 2345, 278.95);

//default parameters
clockType clockType(int = 0, int = 0, int = 0);
clockType clock1;
clockType clock2(5);
clockType clock3(12,30)...

//Destructors
~clockType();



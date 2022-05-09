#include <string>
using std::string;

class inventory
{
public:
    inventory();
    inventory(string);
    inventory(string, int, double);
    inventory(string, int, double, int);

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
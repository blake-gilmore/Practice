#include <iostream>
using namespace std;
class Pizza
{
public:
    void setType(int num);
    void setSize(int num);
    void setToppings(int num);
    int getType();
    int getSize();
    int getToppings();
    void menu();
private:
    int type, size, toppings;
    double cost;
    void calcCost();
};
int main()
{
    Pizza pizza;
    pizza.setType(1);
    pizza.setSize(1);
    pizza.setToppings(0);
    pizza.menu();

}
void Pizza::setType(int num)
{
    if (num < 1 || num > 3)
    {
        cout << "Improper response.";
        return;
    }
    type = num;
    return;
}
void Pizza::setSize(int num)
{
    size = num;
}
void Pizza::setToppings(int num)
{
    toppings = num;
}
int Pizza::getType()
{
    return type;
}
int Pizza::getSize()
{
    return size;
}
int Pizza::getToppings()
{
    return toppings;
}
void Pizza::menu()
{
    char selection;
    do
    {
        cout << 
        cin >> selection;

        switch(selection)
        {
            case 'A':
                break;
            case 'B':
                break;
            case 'C':
                break;
            case 'D':
                break;
        }
    } while (selection != 'X');
    
}
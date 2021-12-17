#include <iostream>
using namespace std;
class Money
{
public:
    void setDollars(int);
    void setCents(int);
    int getDollars();
    int getCents();
    double decimalAmount();
    void input();
private:
    double amount;
};
int main()
{
    Money money1, money2;
    double temp;
    money1.input();
    money2.input();
    cout << "Output money 1 or 2 amount: ";
    cin >> temp;
    if (temp == 1)
    {
        cout << "$" << money1.getDollars << "." << money1.getCents << endl;
    }
    else if (temp == 2)
    {
        cout << "$" << money2.getDollars << "." << money2.getCents << endl;
    }

    
}
void Money::input()
{
    cout << "Enter dollars: ";
    cin >> dollars;
    cout << "Enter cents: ";
    cin >> cents;
    return;
}

#include <iostream>
using namespace std;

class HotDogStand
{
public:
    HotDogStand(int id, int sold);
    void justSold(); //increments total number of hot dogs sold
    int getNumberSold() const;
    static int getTotalSold();

private:
    int idNum;
    int numSold;
    static int totalSold;
};

int HotDogStand::totalSold = 0;

int main()
{
    int input;
    HotDogStand stand1(5642, 10), stand2(172, 0), stand3(928, 2);
    do
    {
        cout << "1. stand one\n" << "2. stand two\n" << "3. stand three\n"
        << "5. quit";
        cin >> input;

        switch(input)
        {
            case 1: 
                stand1.justSold();
                break;
            case 2:
                stand2.justSold();
                break;
            case 3:
                stand3.justSold();
                break;
        }
    } while (input != 5);
    
    cout << "Stand 1: " << stand1.getNumberSold() << endl;
    cout << "Stand 2: " << stand2.getNumberSold() << endl;
    cout << "Stand 3: " << stand3.getNumberSold() << endl;
    cout << "Total Sold: " << stand1.getTotalSold() << endl;
    return 0;
}

HotDogStand::HotDogStand(int id, int sold):idNum(id), numSold(sold)
{
    totalSold += sold;
    return;
}

int HotDogStand::getNumberSold() const
{
    return numSold;
}
int HotDogStand::getTotalSold()
{
    return totalSold;
}
void HotDogStand::justSold()
{
    numSold++;
    totalSold++;
    return;
}

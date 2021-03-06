#include <iostream>
#include "cashRegister.h"
#include "dispenserType.h"
void showSelection();
void sellProduct(dispenserType&, cashRegister&);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    cashRegister counter;
    dispenserType orange(100,50);
    dispenserType apple(100,65);
    dispenserType mango(75,80);
    dispenserType strawberryBanana(100,85);
    int choice;
    showSelection();
    cin >> choice;

    while (choice != 9)
    {
        switch (choice)
        {
        case 1:
            sellProduct(orange, counter);
            break;
        case 2:
            sellProduct(apple, counter);
            break;
        case 3:
            sellProduct(mango, counter);
            break;
        case 4: 
            sellProduct(strawberryBanana, counter);
            break;
        default :
            cout << "Invalid selection." << endl;
        }

        showSelection();
        cin >> choice;
    }

    return 0;
}
void showSelection()
{
    using std::cout;
    using std::endl;
    cout << "*** Welcome to Shelly's Juice Shop ***" << endl;
    cout << "To select an item, enter " << endl;
    cout << "1 for orange juice (50 cents)" << endl;
    cout << "2 for apple juice (65 cents)" << endl;
    cout << "3 for mango juice (80 cents)" << endl;
    cout << "4 for strawberry banana juice (85) cents)" << endl;
    cout << "9 to exit" << endl;
}
void sellProduct(dispenserType& product, cashRegister& pCounter)
{
    using std::cout;
    using std::endl;
    using std::cin;
    int amount(0);
    int amount2;

    if (product.getNoOfItems() > 0)
    {
        do
        {
            cout << "Please deposit " << product.getCost() << " cents" << endl;
            cin >> amount2;
            amount+=amount2;

            if (amount < product.getCost())
            {
                cout << "Not enough. Please deposit another " << product.getCost() - amount << " cents" << endl;
            }
            if (amount >= product.getCost())
            {
                pCounter.acceptAmount(amount);
                product.makeSale();
                cout << "Collect your item at the bottom and enjoy." << endl;
            }

            cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl << endl;
        }while(amount < product.getCost());
    }
    else
        cout << "Sorry, this item is sold out." << endl;
}
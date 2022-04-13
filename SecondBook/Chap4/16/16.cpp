#include <iostream>

using namespace std;

/*
Algorithm:
1. Get net price of each copy
2. Get estimated number of copies
3. Calculate Option 1
    a. 5,000 + 20,000
4. Calculate Option 2
    a. .125 * price of book * number sold
5. Calculate Option 3
    a. .10 * price of book * number sold for first 4000 + .14 * nuumber sold after 4000
 . Output royalties under each option
. Output best option
*/

const int DELIVERY = 5000;
const int PUBLISH = 20000;
const double OP_TWO_PERCENT = .125;
const double OP_THREE_FIRST_PERCENT = .10;
const double OP_THREE_SECOND_PERCENT = .14;
int main()
{
    double copyPrice, estCopies;
    double option1, option2, option3;
    int numOver4(0);
    cout << "Enter price of copy: ";
    cin >> copyPrice;
    cout << "Enter estimated copies: ";
    cin >> estCopies;

    option1 = DELIVERY + PUBLISH;
    option2 = OP_TWO_PERCENT * copyPrice * estCopies;
    if (estCopies > 4000)
    {
        numOver4 = estCopies - 4000;
        estCopies -= 4000;
    }

    option3 = OP_THREE_FIRST_PERCENT * copyPrice * estCopies + OP_THREE_SECOND_PERCENT * copyPrice * numOver4;

    cout << "First Option: $" << option1 << endl << "Second: $" << option2 << endl << "Third: $" << option3 << endl << "Best option is option ";

    if (option1 >= option2 && option1 >= option3)
    {
        cout << "1";
    }
    else if (option2 >= option1 && option2 >= option3)
    {
        cout << "2";
    }
    else
        cout << "3";

    return 0;


}
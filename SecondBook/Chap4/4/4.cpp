#include <iostream>

using namespace std;

int main()
{
    double one, two, three, tempNum;

    cout << "Enter three sides: ";
    cin >> one >> two >> three;

    one *= one;
    two *= two;
    three *= three;

    if (one == two+three || two == one + three || three == one + two)
        cout << "Right triangle.\n";
    else    
        cout << "Not right.\n";

    return 0;

}
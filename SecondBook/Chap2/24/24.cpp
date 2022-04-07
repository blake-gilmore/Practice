#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const int TON = 2205; //In pounds

    double poundsInBag, bagsNeeded;

    cout << "Enter pounds of rice: ";
    cin >> poundsInBag;

    bagsNeeded = TON / poundsInBag;

    cout << bagsNeeded << endl;

    return 0;
}
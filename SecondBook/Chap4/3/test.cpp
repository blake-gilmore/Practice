#include <iostream>

using namespace std;

int main()
{
    int num(10);
    double temp(4.5);
    bool found;

    found = (num == (2 * static_cast<int>(temp) + 1));
    cout << "The value of found is: " << found << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int num;
    char high;
    cout << "Enter number from 0 to 35: ";
    cin >> num;
    if (num>9)
    {
        num+=55;
        high = static_cast<char>(num);
        cout << high << endl;
    }
    else
        cout << num << endl;

        return 0;

}
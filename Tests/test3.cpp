#include <iostream>
using std::cout;
using std::cin;
void backwards(int num);
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    backwards(num);
    return 0;
}
void backwards(int num)
{
    if (num < 10)
    {
        cout << num;
        return;
    }
    else
    {
        backwards(num / 10);
        cout << 
    }
}
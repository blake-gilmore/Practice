#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double digits[9];
    int next;
    string convert;
    ifstream inputStream;
    inputStream.open("numbers.txt");
    while (inputStream >> convert)
    {
        next = convert[0] - '0';
        digits[next]++;
    }
    for (int i = 0; i < 10; i++)
    {
        digits[i] = (digits[i] / 100.0)
        cout << i << ": " << digits[i] << endl;
    }
    inputStream.close();
    return 0;
}
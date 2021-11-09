#include <iostream>
using namespace std;

int main()
{
    int startNumber = 3;
    int primeCounter = 0;

    for (int i = 3; i <=100; i++)
    {
        primeCounter = 0;

        for (int j = 2; j < i; j++)
        {
            if ((i % j) == 0)
                primeCounter++;
        }

        if (primeCounter == 0)
            cout << i << endl;
    }

    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int seed;

    cout << "Enter a seed for the random generation.";
    cin >> seed;

    srand(seed);

    for (int i = 1; i<=10; i++)
    {
        cout << ((RAND_MAX - rand()) / static_cast<double>(RAND_MAX)) << endl;
    }
    return 0;
}
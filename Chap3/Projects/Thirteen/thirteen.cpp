#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int rand1(0), rand2(0), rand3(0), rand4(0);

    rand1 = (rand() % 24) + 1;

    do
    {
        rand2 = (rand() % 24) + 1;
    } while (rand2 == rand1);

    do
    {
        rand3 = (rand() % 24) + 1;
    } while (rand3 == rand1 || rand3 == rand2);

    do
    {
        rand4 = (rand() % 24) + 1;
    } while (rand4 == rand3 || rand4 == rand2 || rand4 == rand1);

    cout << "The four winners are " << rand1 << " " << rand2 << " " << rand3 << " " << rand4 << endl;
    
    
    return 0;
}
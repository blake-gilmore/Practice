#include <iostream>
#include <fstream>

int main()
{
    using std::ifstream;
    using std::endl;
    using std::cout;
    ifstream inputStream("numbers.txt");
    int largest, smallest;
    int next;
    if (inputStream >> next)
    {
        smallest = largest = next;
    }
    while (inputStream >> next)
    {
        if (next < smallest)
            smallest = next;
        else if (next > largest)
            largest = next;
    }
    cout << "Largest: " << largest << endl << "Smallest: " << smallest << endl;
    return 0;
}
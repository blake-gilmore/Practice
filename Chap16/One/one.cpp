#include <iostream>
using std::cout;
using std::cin;
using std::endl;
template <class T>
void binarySearch(T a[], bool& found, int& location, int bottom, int top, T key);

template <class T>
void binarySearch(T a[], bool& found, int& location, int bottom, int top, T key)
{
    int middle = ((top - bottom) / 2) + bottom;
    if (top < bottom)
    {
        found = false;
        return;
    }
    else if (a[middle] == key)
    {
        found = true;
        location = middle;
        return;
    }
    else
    {
        if (a[middle] > key)
        {
            binarySearch(a, found, location, bottom, middle - 1, key);
        }
        else
        {
            binarySearch(a, found, location, middle + 1, top, key);
        }
    }
}
int main()
{
    int key;
    float a[10] = {5, 8, 10, 14, 22, 24, 31, 35, 39, 45};
    bool found;
    int location;
    cout << "Enter the number you're searching for: ";
    cin >> key;
    binarySearch<float>(a, found, location, 0, 9, key);
    if (found == true)
    {
        cout << "Number was found at location " << location << endl;
    }
    else
        cout << "Not found\n";
    return 0;
}
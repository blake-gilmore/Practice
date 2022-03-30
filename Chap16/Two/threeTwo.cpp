#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template <class T>
void insertionSort(T a[], int size);
template<class T>
void pushArray(T a[], int unsorted, int smallestIndex, int size);
int main()
{
    double a[5];
    int next, size(0);
    cout << "Enter the array, enter -1 to exit: ";
    cin >> next;
    while ((next != -1) && (size < 5))
    {
        a[size] = next;
        size++;
        if (size < 5)
        {
            cin >> next;
        }
    }

    cout << "The array sorted is ";
    insertionSort(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

template <class T>
void insertionSort(T a[], int size)
{
    if (size == 0)
    {
        cout << "Array empty.";
        return;
    }
    T nextSmallest;
    int smallestIndex;
    int sorted(0), unsorted(0);
    nextSmallest = a[0];
    smallestIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (a[i] < nextSmallest)
        {
            nextSmallest = a[i];
            smallestIndex = i;
        }
    }
    pushArray(a, unsorted, smallestIndex, size);
    unsorted++;
    for (int i = sorted; i < size; i++)
    {
        smallestIndex = unsorted;
        nextSmallest = a[smallestIndex];
        for (int j = unsorted; j < size; j++)
        {
            if (a[j] < a[smallestIndex])
            {
                smallestIndex = j;
                nextSmallest = a[j];
            }
        }
        pushArray(a, unsorted, smallestIndex, size);
        unsorted++;
    }
    return;
}

template <class T>
void pushArray(T a[], int unsorted, int smallestIndex, int size)
{
    T nextSmallest = a[smallestIndex];
    int pushIndex = smallestIndex;
    while (pushIndex > unsorted)
    {
        a[pushIndex] = a[pushIndex - 1];
        pushIndex--;
    }
    a[unsorted] = nextSmallest;
    return;
}
#include <iostream>

template <class T>
T search(const T a[], int numberUsed, int target)
{
    int index = 0;
    bool found = false;
    while ((!found) && (index < numberUsed))
        if (target == a[index])
            found = true;
        else
            index++;


        if (found)
        return index;
        else
        return –1;
}
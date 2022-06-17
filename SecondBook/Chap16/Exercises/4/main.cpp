/*
Write a function, removeAt , that takes three parameters: an array of
integers, the number of elements in the array, and an integer (say,
index ). The function should delete the array element indicated by
index . If index is out of range or the array is empty, output an appropriate
message. (Note that after deleting the element, the number of elements in
the array is reduced by 1 .) Assume that the array is unsorted.*/
#include <iostream>
void removeAt(int* arr, int& numElements, int index)
{
    if (numElements == 0)
        std::cout << "Empty array.";

    else if (index >= numElements)
        std::cout << "Index not in array.";

    else
    {
        for (int i = 0; i < numElements; i++)
        {
            if (i == index)
            {
                for (int j = i; j < numElements-1; j++)
                {
                    arr[j] = arr[j+1];
                }
                numElements--;
                break;
            }
        }
    }
    return;
}

template <class Type>
void printArray(Type* arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return;
}

int main()
{
    int array[] = {10, 5, 7, 20, 32, 8, 19};
    int numElements = 7;
    removeAt(array, numElements, 3);
    printArray(array, numElements);
    
    return 0;
}
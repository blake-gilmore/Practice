/*Write a program to test your sequential search algorithm that you wrote in
Exercise 3 of this chapter. Use either the function bubbleSort or
insertionSort to sort the list before the search.*/
#include <iostream>

template <class Type>
void bubbleSort(Type* sortArray, int arrSize)
{
    //sorts from small to large
    int tempIndex;
    Type tempType;
    for (int i = 1; i < arrSize; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (sortArray[j] < sortArray[j-1])
            {   
                tempType = sortArray[j-1];
                sortArray[j-1] = sortArray[j];
                sortArray[j] = tempType;
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
template <class Type>
int sequentialSearch(Type searchArray[], int arrSize, Type searchItem)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (searchArray[i] == searchItem)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int myArray[] = {10, 78, 9, 20, 14, 1, 100};
    int size = sizeof(myArray);
    bubbleSort(myArray, 7);
    std::cout << sequentialSearch(myArray, 7,100);
    printArray(myArray, 7);
    
    return 0;
}
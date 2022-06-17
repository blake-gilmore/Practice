/*Write a version of the selection sort algorithm that can be used to sort a list
of strings. (Selection sort for int lists is discussed in Chapter 8.)*/


#include <iostream>
#include <string>
#include <cctype>
void selectionSort(std::string* list, int numElements)
{
    int tempIndex;
    char ch;
    std::string tempString;
    for (int i = 0; i < numElements-1; i++)
    {
        tempString = list[i];
        tempIndex = i;
        for (int j = i; j < numElements; j++)
        {
            if (tolower(tempString[0]) > tolower(list[j][0]))
            {
                tempString = list[j];
                tempIndex = j;
            }
        }
        tempString = list[i];
        list[i] = list[tempIndex];
        list[tempIndex] = tempString;

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
    std::string list[5];
    for (int i = 0; i < 5; i++)
        std::cin >> list[i];

    selectionSort(list, 5);
    printArray(list, 5);
    return 0;
}
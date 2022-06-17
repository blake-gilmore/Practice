/*Write a version of the bubble sort algorithm that can be used to sort a string
vector object. Also, write a program to test your algorithm.*/

#include <vector>
#include <iostream>
#include <string>

template <class Type>
void bubbleSort(std::vector<Type> &sortVector)
{
    //sorts from small to large
    int tempIndex;
    Type tempType;
    int arrSize = sortVector.size();
    for (int i = 1; i < arrSize; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (tolower(sortVector[j][0]) < tolower(sortVector[j-1][0]))
            {   
                tempType = sortVector[j-1];
                sortVector[j-1] = sortVector[j];
                sortVector[j] = tempType;
            }
        }
    }
    return;
}
template <class Type>
void printArray(std::vector<Type> arr)
{
    int arrSize = arr.size();
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return;
}

int main()
{   
    std::string tempString;
    std::vector<std::string> stringVect;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> tempString;
        stringVect.push_back(tempString);
    }
    bubbleSort(stringVect);
    printArray(stringVect);
    
    return 0;
}
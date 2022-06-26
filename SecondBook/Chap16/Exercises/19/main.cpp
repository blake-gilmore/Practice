#include <iostream>
#include <cmath>


int recursiveBinarySearch(int* arrayIn, int value, int numinArray, int startingIndex = 0)
{
    int middleIndex = (numinArray / 2) + startingIndex;
    
    if (numinArray == 0)
        return -1;
    else if (arrayIn[middleIndex] == value)
        return middleIndex;
    else if (arrayIn[middleIndex] < value)
        return recursiveBinarySearch(arrayIn, value, (numinArray - (middleIndex + 1)), middleIndex + 1);
    else
        return recursiveBinarySearch(arrayIn, value, (middleIndex - startingIndex), startingIndex);
}

int main()
{
    int sortArray[10] = {0, 1, 9, 10, 12, 13, 17, 20, 45, 100};

    std::cout << "Enter the number you want: ";
    int userNum;
    std::cin >> userNum;

    int searchIndex = recursiveBinarySearch(sortArray, userNum, 10);
    if (searchIndex == -1)
        std::cout << "Not found\n";

    else
        std::cout << searchIndex << std::endl;
    return 0;
}
int recursiveBinarySearch(int* arrayIn, int value, int numinArray, int startingIndex)
{
    int middleIndex = (numinArray / 2) + startingIndex;
    
    if (middleIndex == 0)
        return -1;
    else if (arrayIn[middleIndex] == value)
        return middleIndex;
    else if (arrayIn[middleIndex] < value)
        return recursiveBinarySearch(arrayIn, value, (numinArray - (middleIndex + 1)), middleIndex + 1);
    else
        return recursiveBinarySearch(arrayIn, value, ((middleIndex - 1) - startingIndex), startingIndex);
}
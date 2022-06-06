#include <iostream>
#include <cmath>

template<class ArrayType>
class myArray
{
public:
    myArray(int = 0, int = 0);
    void initializeArray();
    ArrayType getElement(int);
    void setElement(int);
    ~myArray();
    ArrayType& operator[](int);

protected:
    ArrayType* typePtr;
    int arrayStart, arrayEnd;
    int numElements;

};

template<class ArrayType>
myArray<ArrayType>::myArray(int start, int end)
{
    arrayStart = start;
    arrayEnd = end;
    numElements = end - start + 1;
    typePtr = new ArrayType[numElements];
    
}

template <class ArrayType>
void myArray<ArrayType>::initializeArray()
{
    for (int i = 0; i < numElements; i++)
    {
        ArrayType tempType;
        std::cout << "Enter element number " << arrayStart + i << ":";
        std::cin >> tempType;
        typePtr[i] = tempType;
    }
    return;
}

template <class ArrayType>
myArray<ArrayType>::~myArray()
{
    delete[] typePtr;
    typePtr = NULL;
    return;
}

template <class ArrayType>
ArrayType myArray<ArrayType>::getElement(int index)
{
    int difference = abs(0 - arrayStart);
    if (index > arrayEnd || index < arrayStart)
    {
        std::cout << "Out of bound. exiting.\n";
        exit;
    }
        
    return (typePtr[index + difference]);
}

template <class ArrayType>
ArrayType& myArray<ArrayType>::operator[](int index)
{
    int difference = abs(0 - arrayStart);
    if (index > arrayEnd || index < arrayStart)
    {
        std::cout << "Out of bound. exiting.\n";
        exit;
    }
        
    return (typePtr[index + difference]);
}

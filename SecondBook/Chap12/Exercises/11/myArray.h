#include <iostream>

template<class ArrayType>
class myArray
{
public:
    myArray(int = 0, int = 0);
    void initializeArray();
    ArrayType getElement(int);
    void setElement(int);
    ~myArray();

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
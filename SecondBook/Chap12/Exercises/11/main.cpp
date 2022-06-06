
#include "myArray.h"

int main()
{
    myArray<int> intArray(-5, 4);
    intArray.initializeArray();
    
    std::cout << "Enter the number of the array you want to get: ";
    int tempInt;
    std::cin >> tempInt;
    std::cout << "The element at that number is " << intArray[tempInt];
    exit;

    std::cin >> tempInt;
    int tempElement;
    std::cout << "Enter the element: ";
    std::cin >> tempElement;
    //intArray.setElement(tempElement);
    return 0;
}
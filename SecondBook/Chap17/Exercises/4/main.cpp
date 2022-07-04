/*(Printing a single linked list backward) Include the functions
reversePrint and recursiveReversePrint , as discussed in this chapter,
in the class linkedListType. Also, write a program function to print a
(single) linked list backward. (Use either the class unorderedLinkedList or
the class orderedLinkedList to test your function.)*/

#include "unorderedLinkedList.h"
#include <iostream>
int main()
{
    unorderedLinkedList<int> myList;
    int choice;
    while(true)
    {
        std::cout << "1: add. 2:print";
        std::cin >> choice;
        switch(choice)
        {
            case 1:
                std::cin >> choice;
                myList.addToFront(choice);
                break;
            case 2:
                break;
        }
        
    }
    
    
    return 0;
}
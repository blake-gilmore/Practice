/*The function insert of the class orderedLinkedList does not check if
the item to be inserted is already in the list; that is, it does not check for
duplicates. Rewrite the definition of the function insert so that before
inserting the item, it checks whether the item to be inserted is already in the
list. If the item to be inserted is already in the list, the function outputs an
appropriate error message. Also, write a program to test your function.*/
#include "orderedLinkedList.h"
#include <iostream>
int main()
{
    orderedLinkedList<int> newList;
    int userNum;
    std::cin >> userNum;
    newList.addToFront(userNum);
    std::cin >> userNum;
    newList.addToFront(userNum);
    std::cin >> userNum;
    newList.addToFront(userNum);
    newList.print();
    
    return 0;
}
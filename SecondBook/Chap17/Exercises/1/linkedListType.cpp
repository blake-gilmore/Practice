#include "nodeType.h"
#include "linkedListType.h"

template <class Type>
linkedListType<Type>::linkedListType()
{
    head = nullptr;
    tail = nullptr;
    numEntries = 0;
    return;
}

template <class Type>
void linkedListType<Type>::addToFront(Type newInfo)
{
    nodeType<Type>* newNode = new nodeType<Type>;
    newNode->info= newInfo;
    newNode->link = head->link;
    head = newNode;
    numEntries++;
    return;
}
template <class Type>
void linkedListType<Type>::addToBack(Type newInfo)
{
    nodeType<Type>* newNode = new nodeType<Type>;
    newNode->info = newInfo;
    newNode->link = nullptr;
    tail = newNode;
    numEntries++;
    return;
}
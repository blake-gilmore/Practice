#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H
#include "nodeType.h"
template <class Type>
class linkedListIterator
{
public:
    linkedListIterator();
    linkedListIterator(nodeType<Type>*);
    Type operator*();
    linkedListIterator operator++();
protected:
    nodeType<Type>* currentNode;
};

template <class Type>
linkedListIterator<Type>::linkedListIterator()
{
    currentNode = nullptr;
    return;
}

template <class Type>
Type linkedListIterator<Type>::operator*()
{
    return currentNode->info;
}

template <class Type>
linkedListIterator<Type> linkedListIterator<Type>::operator++()
{
    currentNode = currentNode->link;
    return *this;
}

template <class Type>
linkedListIterator<Type>::linkedListIterator(nodeType<Type>* newNode)
{
    currentNode = newNode;
    return;
}
#endif
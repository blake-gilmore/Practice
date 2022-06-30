#ifndef LINKEDLISTTYPE_H
#define LINKEDLISTTYPE_H

#include "nodeType.h"
#include "linkedListIterator.h"
#include <fstream>
#include <iostream>

template <class Type>
class linkedListType
{
public:
    linkedListType();
    void addToFront(Type&);
    void addToBack(Type&);
    void print() const;
    std::ostream& print(std::ostream& os) const;

    template <class oType>
    friend std::ostream& operator<< (std::ostream& fileOut, linkedListType<oType>& itemToWrite);

protected:
    nodeType<Type> *head;
    nodeType<Type> *tail;
    int numEntries;
};

template <class Type>
void linkedListType<Type>::print() const
{

}

template <class Type>
linkedListType<Type>::linkedListType()
{
    head = nullptr;
    tail = nullptr;
    numEntries = 0;
    return;
}

template <class Type>
void linkedListType<Type>::addToFront(Type& newInfo)
{
    nodeType<Type>* newNode = new nodeType<Type>;
    newNode->info = newInfo;
    newNode->link = head->link;
    head = newNode;
    numEntries++;
    return;
}
template <class Type>
void linkedListType<Type>::addToBack(Type& newInfo)
{
    nodeType<Type>* newNode = new nodeType<Type>;
    newNode->info = newInfo;
    newNode->link = nullptr;
    if (head == nullptr)
        head = newNode;
    else
        tail->link = newNode;
    tail = newNode;
    numEntries++;
    return;
}

template <class Type>
std::ostream& operator<< (std::ostream& fileOut, linkedListType<Type>& itemToWrite)
{
    itemToWrite.print(fileOut);
    return fileOut;
}

template<class Type>
std::ostream& linkedListType<Type>::print(std::ostream& fileOut) const
{
    linkedListIterator<Type> iterator(head);
    
    for (int i = 0; i < numEntries; i++)
    {
        Type newThing = *iterator;
        fileOut << newThing;
        ++iterator;
    }
    return fileOut;
}   

#endif
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
    linkedListType(const linkedListType<Type>&);
    ~linkedListType();
    const linkedListType<Type>& operator =(const linkedListType<Type>&);
    void initializeList();
    bool isEmptyList();
    int length();
    void destroyList();
    Type front() const;
    Type back() const;
    virtual bool search(const Type&) const = 0;
    virtual void deleteNode(const Type&) = 0;
    virtual void addToFront(Type&) = 0;
    virtual void addToBack(Type&) = 0;
    linkedListIterator<Type> begin();
    linkedListIterator<Type> end();
    void print() const;
    std::ostream& print(std::ostream& os) const;

    template <class oType>
    friend std::ostream& operator<< (std::ostream& fileOut, linkedListType<oType>& itemToWrite);

protected:
    nodeType<Type> *head;
    nodeType<Type> *tail;
    int numEntries;

private:
    void copyList(const linkedListType<Type>&);
};

template <class Type>
void linkedListType<Type>::copyList(const linkedListType<Type>& otherList)
{
    nodeType<Type>* copyNode = otherList.head;
    numEntries = otherList.numEntries;
}

template <class Type>
linkedListIterator<Type> linkedListType<Type>::begin()
{
    linkedListIterator<Type> temp(head);
    return temp;
}

template <class Type>
linkedListIterator<Type> linkedListType<Type>::end()
{
    linkedListIterator<Type> temp(tail);
    return temp;
}


template <class Type>
Type linkedListType<Type>::front() const
{
    return head->info;
}

template <class Type>
Type linkedListType<Type>::back() const
{
    return tail->info;
}

template <class Type>
void linkedListType<Type>::destroyList()
{
    nodeType<Type>* current = head;

    for (int i = 0; i < numEntries; i++)
    {
        head = head->link;
        delete current;
        current = head;
    }
    tail = nullptr;
    numEntries = 0;
}

template <class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type>& otherList)
{
    copyList(otherList);
    return;
}

template <class Type>
linkedListType<Type>::~linkedListType()
{
    destroyList();
    return;
}

template <class Type>
const linkedListType<Type>& linkedListType<Type>::operator =(const linkedListType<Type>& otherList)
{
    if (this != otherList)
    {
        copyList(otherList);
    }
    return *this;
}

template <class Type>
void linkedListType<Type>::initializeList()
{
    destroyList();
    head = nullptr;
    tail = nullptr;
    numEntries = 0;
}

template <class Type>
bool linkedListType<Type>::isEmptyList()
{
    if (numEntries == 0)
        return true;
    else
        return false;
}

template <class Type>
void linkedListType<Type>::print() const
{
    nodeType<Type>* printIterator;
    printIterator = head;

    for (int i = 0; i < numEntries; i++)
    {
        std::cout << printIterator->info << " ";
        printIterator = printIterator->link;
    }
    return;
}

template <class Type>
int linkedListType<Type>::length()
{
    return numEntries;
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
#ifndef UNORDEREDLINKEDLIST_H
#define UNORDEREDLINKEDLIST_H
#include "linkedListType.h"

template <class Type>
class unorderedLinkedList: public linkedListType<Type>
{
public:
    unorderedLinkedList();
    virtual void addToFront(const Type& newInfo);
    virtual void addToBack(const Type& newInfo);
    virtual bool search(const Type&) const;
    virtual void deleteNode(const Type&);


protected:
};

template <class Type>
bool unorderedLinkedList<Type>::search(const Type& searchItem) const
{
    nodeType<Type>* itemSearcher = this->head;
    while (itemSearcher != nullptr)
    {
        if (itemSearcher->info == searchItem)
            return true;
        itemSearcher = itemSearcher->link;
    }
    return false;
}
template <class Type>
void unorderedLinkedList<Type>::deleteNode(const Type& itemToDelete)
{
    if (!search(itemToDelete))
    {
        std::cout << "Invalid item. Not deleted.";
        return;
    }

    nodeType<Type>* itemSearcher = this->head;
    nodeType<Type>* previousNode = this->head;
    while (itemSearcher != nullptr)
    {
        if (itemSearcher->info == itemToDelete)
        {
            if (itemSearcher == this->head)
            {
                this->head = itemSearcher->link;
                delete itemSearcher;
            } 
            else
            {
                previousNode->link = itemSearcher->link;
                delete itemSearcher;
            }
            this->numEntries--;
            return;
        }
        previousNode = itemSearcher;
        itemSearcher = itemSearcher->link;
    }
}

template <class Type>
unorderedLinkedList<Type>::unorderedLinkedList():linkedListType<Type>()
{
    return;
}

template <class Type>
void unorderedLinkedList<Type>::addToFront(const Type& newInfo)
{
    nodeType<Type>* newNode = new nodeType<Type>;
    newNode->info = newInfo;
    if (this->head == nullptr)
        newNode->link = nullptr;
    else
        newNode->link = this->head;

    this->head = newNode;
    this->numEntries++;
    return;
}
template <class Type>
void unorderedLinkedList<Type>::addToBack(const Type& newInfo)
{
    nodeType<Type>* newNode = new nodeType<Type>;
    newNode->info = newInfo;
    newNode->link = nullptr;
    if (this->head == nullptr)
        this->head = newNode;
    else
        this->tail->link = newNode;
    this->tail = newNode;
    this->numEntries++;
    return;
}
#endif
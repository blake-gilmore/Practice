
#ifndef ORDEREDLINKEDLIST_H
#define ORDEREDLINKEDLIST_H
#include "linkedListType.h"

template <class Type>
class orderedLinkedList: public linkedListType<Type>
{

public:
    orderedLinkedList();
    virtual void addToFront(const Type& newInfo);
    virtual void addToBack(const Type& newInfo);
    virtual bool search(const Type&) const;
    virtual void deleteNode(const Type&);
protected:
    virtual void addToList(const Type& newInfo);


};

template <class Type>
void orderedLinkedList<Type>::addToList(const Type& newInfo)
{
    //Check if newInfo is already in the list
    if (search(newInfo))
    {
        std::cout << "Item already in. Not adding.";
        return;
    }

    nodeType<Type>* newNode = new nodeType<Type>;
    newNode->info = newInfo;
    newNode->link = nullptr;
    //Case 1: If list is empty
    if (this->isEmptyList())
    {
        this->numEntries++;
        this->head = newNode;
        this->tail = newNode;
        return;
    }
    
    //Case 2: List is non-empty
    nodeType<Type>* currNode, * prevNode;
    currNode = this->head;
    prevNode = nullptr;

    do
    {
        if (currNode->info > newInfo)
        {
            newNode->link = currNode;
            
            if (prevNode == nullptr)
                this->head = newNode;
            else
                prevNode->link = newNode;

            this->numEntries++;
            return;
        }
        currNode = currNode->link;
        if (prevNode == nullptr)
            prevNode = this->head;
        else
            prevNode = prevNode->link;
    } while (currNode != nullptr);

    this->tail->link = newNode;
    this->tail = newNode;
    this->numEntries++;
    return;
}


template <class Type>
orderedLinkedList<Type>::orderedLinkedList(): linkedListType<Type>()
{
    return;
}

template <class Type>
void orderedLinkedList<Type>::addToFront(const Type& newInfo)
{
    addToList(newInfo);   
}
template <class Type>
void orderedLinkedList<Type>::addToBack(const Type& newInfo)
{
    addToList(newInfo);
}

template <class Type>
bool orderedLinkedList<Type>::search(const Type& searchItem) const
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
void orderedLinkedList<Type>::deleteNode(const Type&)
{
    return;
}

#endif
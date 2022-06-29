#include "nodeType.h"
template <class Type>
class linkedListType:
{
public:
    linkedListType();
    void addToFront(Type);
    void addToBack(Type);


protected:
    nodeType<Type> *head;
    nodeType<Type> *tail;
    int numEntries;
};


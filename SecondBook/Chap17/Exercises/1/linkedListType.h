#include "nodeType.h"
template <class Type>
class linkedListType:
{
public:
    linkedListType();
    addToFront(Type);
    addToBack(Type);
    

protected:
    nodeType<Type> *head;
    nodeType<Type> *tail;
};

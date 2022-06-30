#ifndef NODETYPE_H
#define NODETYPE_H
template <class Type>
struct nodeType
{
public:
    nodeType<Type>* link;
    Type info;
};

#endif
template <class type>
struct nodeType
{
    type info;
    nodeType<type> *link;

protected:
    int count;
    nodeType<type> *first;
    nodeType<type> *last;
};

template <class type>
class linkedListIterator
{
public:
    linkedListIterator();
    linkedListIterator(nodeType<type> *ptr);
    type operator*();
    linkedListIterator<type> operator++();
    bool operator==(const linkedListIterator<type>& right) const;
    bool operator!=(const linkedListIterator<type>& right) const;

private:
    nodeType<type> *current;
};

template <class type>
linkedListIterator<type>::linkedListIterator()
{
    current = nullptr;
}

template <class type>
linkedListIterator<type>::linkedListIterator(nodeType<type> *ptr)
{
    current = ptr;
}

template <class type>
linkedListIterator<type> linkedListIterator<type>::operator++()
{
    current = current->link;
    return *this;
}



template <class Type>
class linkedListType
{
public:
    const linkedListType<Type>& operator= (const linkedListType<Type>&);
}
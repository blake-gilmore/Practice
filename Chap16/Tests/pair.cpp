template <class T>
int addUp(const Pair<int>& thePair)
{
    return (thePair.getFirst() + thePair.getSecond());
}

template <class T>
T addUp(const Pair<T>& thePair)
{
    return (thePair.getFirst() + thePair.getSecond());
}
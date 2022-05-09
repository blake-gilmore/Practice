#include "temporary.h"
#include <iostream>

void temporary::set(string newString, double newDoub1, double newDoub2)
{
    description = newString;
    first = newDoub1;
    second = newDoub2;

    return;
}
void temporary::print() const
{
    using std::cout;
    using std::endl;
    cout << description << ":  length = " << first << ", width = " << second << ", area = " << manipulate() << endl;
}
void temporary::get(string& oldString, double& oldDoub1, double& oldDoub2)
{
    oldString = description;
    oldDoub1 = first;
    oldDoub2 = second;
}
void temporary::setDescription(string newDescrip)
{
    description = newDescrip;
    return;
}
void temporary::setFirst(double newFirst)
{
    first = newFirst;
    return;
}
void temporary::setSecond(double newSecond)
{
    second = newSecond;
    return;
}
string temporary::getDescription() const
{
    return description;
}
double temporary::getFirst() const
{
    return first;
}
double temporary::getSecond() const
{
    return second;
}

temporary::temporary(string newString, double newDoub1, double newDoub2)
{

    set(newString, newDoub1, newDoub2);
    return;
}

double temporary::manipulate() const
{
    if (description == "rectangle")
        return (first * second);
    else if (description == "circle")
        return (3.1415*first*first);
    else if (description == "sphere")
        return ((4/3)*3.14*first*first*first);
    else if (description == "cylinder")
        return (3.14*first*first*second);
    else
        return -1;
}

#include "rectangle.h"
#include <iostream>
using std::cout;
void Rectangle::draw()
{
    cout << "Drawn. The calling object is a rectangle.\n";
}
void Rectangle::erase()
{
    cout << "Erased. The calling object is a rectangle.\n";
}
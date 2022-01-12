#include "triangle.h"
#include <iostream>
using std::cout;

void Triangle::draw()
{
    cout << "Drawn. The calling object is a triangle.\n";
}
void Triangle::erase()
{
    cout << "Erased. The calling object is a triangle";
}
#include "figure.h"
#include <iostream>
using std::cout;
using std::endl;
void Figure::center()
{
    draw();
    erase();
}
void Figure::draw()
{
    cout << "Drawn. The calling object is a figure.\n";
}
void Figure::erase()
{
    cout << "Erased. The calling object is a figure.\n";
}
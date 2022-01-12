#include <iostream>
#include "figure.h"
#include "rectangle.h"
#include "triangle.h"
using std::cout;
int main( )
{
    Triangle tri;
    tri.draw( );
    cout <<
    "\nDerived class Triangle object calling center( ).\n";
    tri.center( ); //Calls draw and center
    Rectangle rect;
    rect.draw( );
    cout <<
    "\nDerived class Rectangle object calling center( ).\n";
    rect.center( ); //Calls draw and center
    return 0;
}
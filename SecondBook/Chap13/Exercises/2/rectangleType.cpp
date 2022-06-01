#include "rectangleType.h"
#include <iostream>
using namespace std;

void rectangleType::setDimension(double l, double w)
{
if (l >= 0)
length = l;
else
length = 0;
if (w >= 0)
width = w;
else
width = 0;
}
double rectangleType::getLength() const
{
return length;
}
double rectangleType::getWidth() const
{
return width;
}
double rectangleType::area() const
{
return length * width;
}
double rectangleType::perimeter() const
{
return 2 * (length + width);
}
void rectangleType::print() const
{
cout << "Length = " << length
<< "; Width = " << width;
}
rectangleType::rectangleType(double l, double w)
{
setDimension(l, w);
}
rectangleType::rectangleType()
{
length = 0;
width = 0;
}

rectangleType operator++(rectangleType rectIn)
{
    rectIn.length++;
    rectIn.width++;
    return rectIn;
}
rectangleType operator--(rectangleType rectIn)
{
    rectIn.length--;
    rectIn.width--;

    if (rectIn.length < 1)
    {
        cout << "Length below 1, keeping at 1\n";
        rectIn.length++;
    }
    if (rectIn.width < 1)
    {
        cout << "Width below 1, keeping at 1\n";
        rectIn.width++;
    }

    return rectIn;
}

rectangleType operator-(rectangleType rectOne, rectangleType rectTwo)
{
    rectangleType tempRect;
    tempRect.length = rectOne.length - rectTwo.length;
    if (tempRect.length < 1)
    {
        cout << "Length below 1. Cannot do operation.\n";
        return rectOne;
    }
    tempRect.width = rectOne.width - rectTwo.width;
    return tempRect;
}

bool operator==(const rectangleType& rectOne, const rectangleType& rectTwo)
{
    return (rectOne.area() == rectTwo.area());
}
bool operator!=(const rectangleType& rectOne, const rectangleType& rectTwo)
{
    return (rectOne.area() != rectTwo.area());
}
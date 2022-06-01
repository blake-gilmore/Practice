/*C8648_CH13
P R O G R A M M I N G E X E R C I S E S
1. This chapter uses the class rectangleType to illustate how to overload the
operators +, *, ==, !=, >>, and <<. In this exercise, first redefine the class
rectangleType by declaring the instance variables as protected and then
overload additional operators as defined in parts a to c.
*/
#include "rectangleType.h"
#include <iostream>

int main()
{
    rectangleType rectOne, rectTwo;
    rectOne.setDimension(10, 9);
    rectTwo.setDimension(6,7);

    rectangleType rectThree = rectOne - rectTwo;
    std::cout << "Rect three: " << rectThree.getLength() << " " << rectThree.getWidth() << std::endl;
    ++rectThree;
    std::cout << "Rect three: " << rectThree.getLength() << " " << rectThree.getWidth() << std::endl;


    rectangleType rectFour;
    rectFour.setDimension(10,9);
    if (rectOne == rectFour)
    {
        std::cout << "Equal";
    }



    return 0;
}

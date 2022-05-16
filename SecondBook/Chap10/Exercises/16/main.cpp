#include "lineType.h"
#include <iostream>

int main()
{
    using std::cout; 
    using std::endl;
    lineType firstLine(10, 12, 5);
    lineType secondLine(-2, 10, -10);
    lineType perpLine(12, 0 ,5);
    lineType equalFirst(20, 24, 10);

    cout << firstLine.isEqual(secondLine) << endl;
    cout << firstLine.isEqual(equalFirst) << endl;

    firstLine.findIntersection(secondLine);


    return 0;

}
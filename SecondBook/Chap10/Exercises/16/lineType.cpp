#include "lineType.h"
#include <iostream> 
#include <iomanip>
//constructor for all values. Initializes all to 0
lineType::lineType(double setA, double setB, double setC)
{
    a = setA;
    b = setB;
    c = setB;
    return;
}

//Precondition: Values a, b, and c should be initialized beforehand
//Calling lineType is not a vertical line. Will exit otherwise.
//Postcondition: returns -a/b if b!=0
double lineType::getSlope() const
{
    using std::cout; 
    using std::endl;
    if (b == 0)
    {
        cout << "Error. Line is vertical. Cannot find slope ,exiting program.";
        exit;
    }
    else
    {
        return (-a/b);
    }
    return (-a/b);
}

//Precondition: lineType parameter and calling lineType are initialized lineTypes
//Postcondition: returns true if lines are equal. False if not.
bool lineType::isEqual(lineType& cmpLine) const
{
    if(a == cmpLine.getA() && b == cmpLine.getB() && c == cmpLine.getC())
        return true;
    if (a/cmpLine.getA() == b/cmpLine.getB() && a/cmpLine.getA() == c/cmpLine.getC())
        return true;
    else
        return false;
}

//Precondition: &lineType parameter and calling lineType are initialized lineType
//Postcondition: Returns true if their slopes are the same. Returns false if otherwise
bool lineType::isParallel(lineType& cmpLine) const
{
    if (getSlope() == cmpLine.getSlope())
        return true;
    else
        return false;
}

//Precondition: &lineType parameter and calling lineType are initialized
//lineTypes
//Postcondition: returns true if the product of both lines' slopes is -1.
//returns false if otherwise
bool lineType::isPerpendicular(lineType& cmpLine) const
{
    if (getSlope()*cmpLine.getSlope() == -1)
        return true;
    else
        return false;
    return false;
}

//Precondition: lineType parameter and calling lineType are initialized lineTypes
//where they are not parallel
//Postcondition: Prints the x and y values of the intersection. Prints invalid if
//they are parallel
void lineType::findIntersection(lineType& cmpLine) const
{  
    using std::cout;
    using std::endl;
    using std::setprecision;
    double intersectX, intersectY;
    if (isParallel(cmpLine))
    {
        cout << "Lines are parallel. Invalid." << endl;
        return;
    }
    intersectX = (b*cmpLine.getC() - cmpLine.getB()*c)/(a*cmpLine.getB() - cmpLine.getA()*b);
    intersectY = ((c*cmpLine.getA() - cmpLine.getC()*a)/(a*cmpLine.getB() - cmpLine.getA() * b));

    cout << std::fixed << std::showpoint << setprecision(2);
    cout << "Lines intersect at (" << intersectX << "," << intersectY << ")\n";

    return;
}
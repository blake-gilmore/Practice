#include "swimmingPool.h"
#include <iostream>

swimmingPool::swimmingPool(double setLength, double setWidth, double setDepth, double setRateChange)
{
    length = setLength;
    width = setWidth;
    depth = setDepth;
    rateChange = setRateChange;
    gallonsFilled = 0;
}
double swimmingPool::waterNeeded()
{
    using std::cout;
    cout << "The water is currently at " << gallonsFilled << " gallons. You need " << gallonsNeeded - gallonsFilled << " gallons to fill it.\n";
    return;
}
void swimmingPool::addOrDrain()
{
    using std::cout;
    using std::cin;
    double seconds, totalFilled;
  
    cout << "How many seconds do you want to add water to the pool?\n";
    cin >> seconds;
    totalFilled = (seconds * rateChange);
    cout << "The pool was changed by " << totalFilled << " gallons.\n";
    gallonsFilled += totalFilled;
    if (gallonsFilled < 0)
        gallonsFilled = 0;
    return;
}
double swimmingPool::timeToFill()
{
    using std::cout;
    double time = (gallonsNeeded - gallonsFilled) * rateChange;
    cout << "You need " << time << "seconds to fill/empty the pool.\n";
    return;
}
void swimmingPool::determineGallons()
{
    gallonsNeeded = length * width * depth * 7.481;
    return;
}
void swimmingPool::setSize()
{
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter depth: ";
    std::cin >> width;
    determineGallons();
    return;
}
#include <iostream>
#include <cmath>
using namespace std;

void calculatePerimeterArea(double& area, double& perimeter, double s1, double s2, double s3);
void inputSides(double& s1, double& s2, double& s3);
bool testTriangle(double s1, double s2, double s3);
double calcSemiperimeter(double s1, double s2, double s3);

int main()
{
    double s1, s2, s3, area, perimeter;
    bool isTriangle;
    do
    {
        inputSides(s1, s2, s3);
        isTriangle = testTriangle(s1, s2, s3);
    }while (!isTriangle);

    calculatePerimeterArea(area, perimeter, s1, s2, s3);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "The area is " << area << " and the perimeter is " << perimeter << endl;

    return 0;
}

void calculatePerimeterArea(double& area, double& perimeter, double s1, double s2, double s3)
{
    double semiperimeter = calcSemiperimeter(s1, s2, s3);

    perimeter = s1 + s2 + s3;
    area = sqrt(semiperimeter * (semiperimeter - s1) * (semiperimeter - s2) * (semiperimeter - s3));
    return;
}
void inputSides(double& s1, double& s2, double& s3)
{
    cout << "Input the three sides: ";
    cin >> s1 >> s2 >> s3;
    return;
}
bool testTriangle(double s1, double s2, double s3)
{
    if (((s1 + s2) <= s3) || ((s2 + s3) <= s1) || ((s1 + s3) <= s2))
        return false;
    else
        return true;
}
double calcSemiperimeter(double s1, double s2, double s3)
{
    return ((s1 + s2 + s3) / 2);
}
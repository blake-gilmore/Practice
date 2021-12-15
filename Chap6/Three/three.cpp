#include <iostream>
using namespace std;
class Point
{
public:
    void setData();
    void movePoint(double num1, double num2);
    void rotate90Degrees();
    double getXCoordinate() const;
    double getYCoordinate() const;
private:
    double xCoord;
    double yCoord;
};
int main()
{
    Point point;
    point.setData();
    char selection;
    double x, y;
    do
    {
        cout << "1. Move.\n2. Rotate 90 Degrees.\n3. Get X coord.\n4. Get Y coord.\n";
        cin >> selection;
        switch (selection)
        {
            case '1':
                cout << "Enter X Coord Change: ";
                cin >> x;
                cout << "Enter Y Coord Chagne: ";
                cin >> y;
                point.movePoint(x, y);
                break;
            case '2':
                point.rotate90Degrees();
                break;
            case '3':
                cout << point.getXCoordinate() << endl;
                break;
            case '4':
                cout << point.getYCoordinate() << endl;
                break;
        }
    }while (selection != 'X');
}
void Point::setData()
{
    xCoord = 0;
    yCoord = 0;
    return;
}
void Point::movePoint(double num1, double num2)
{
    xCoord += num1;
    yCoord += num2;
    return;
}
void Point::rotate90Degrees()
{
    double tempX, tempY;
    tempX = xCoord;
    xCoord = -yCoord;
    yCoord = tempX;
    return;
}
double Point::getXCoordinate() const
{
    return xCoord;
}
double Point::getYCoordinate() const
{
    return yCoord;
}
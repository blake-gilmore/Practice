#include <iostream>
using namespace std;

int main()
{
    double value;
    double x (1), y (2), z (3);

    double expressionOne = 3*x;
    double expressionTwo = (3*x) + y;
    double expressionThree = (x + y) / 7;
    double expressionFour = (3 * x + y) / (z + 2);

    cout << expressionOne << expressionTwo << expressionThree << expressionFour;

    return 0;
}
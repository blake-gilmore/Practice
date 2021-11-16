#include <iostream>
#include <cmath>
using namespace std;

void calculation (double num1, double num2, double num3, double num4);
double computeAverage ( double num1, double num2, double num3, double num4);
double computeStandardDeviation (double num1, double num2, double num3, double num4, double average);

int main()
{
    double num1, num2, num3, num4, average, standardDeviation;
    char test;

    do
    {
        cout << "Enter four numbers: ";
        cin >> num1 >> num2 >> num3 >> num4;

        calculation (num1, num2, num3, num4);

        cout << "Would you like to test four more numbers? (Y/N):  ";
        cin >> test;

    } while (test != 'N');

}

void calculation (double num1, double num2, double num3, double num4)
{
    double average, standardDeviation;
    average = computeAverage(num1, num2, num3, num4);

    cout << "The average of your four numbers are " << average << " and the standard deviation of your four numbers is ";

    standardDeviation = computeStandardDeviation( num1, num2, num3, num4, average);

    cout << standardDeviation << endl << endl;
}

double computeAverage(double num1, double num2, double num3, double num4)
{
    double average;
    
    average = (num1 + num2 + num3 + num4) / 4;

    return average;
}

double computeStandardDeviation (double num1, double num2, double num3, double num4, double average)
{
    double standardDeviation;
    standardDeviation = (((num1 - average) * ( num1 - average)) + ((num2 - average) * (num2 - average)) + ((num3 - average) * (num3 - average)) + ((num4 - average) * (num4 - average))) / 4;
    standardDeviation = sqrt(standardDeviation);
    return standardDeviation;
}

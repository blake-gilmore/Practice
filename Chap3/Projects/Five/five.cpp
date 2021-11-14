#include <iostream>
using namespace std;

double hatSizeCalc(double weight, double heightInches);
double jacketSizeCalc(double weight, double heightInches, int age);
double waistSizeCalc(double weight, int age);

int main()
{
    double weight, feet, inches, heightInches, hatSize, jacketSize, waistSize;
    int age;
    char cont;


    do
    {
    
        cout << "Enter your height in feet: ";
        cin >> feet;
        cout << "Enter how many inches: ";
        cin >> inches;

        heightInches = inches + (feet * 12);
        
        cout << "Enter your weight in pounds: ";
        cin >> weight;

        cout << "Enter your age: ";
        cin >> age;

        hatSize = hatSizeCalc(weight, heightInches);
        jacketSize = jacketSizeCalc(weight, heightInches, age);
        waistSize = waistSizeCalc(weight, age);

        cout << "Your clothing sizes are as follows: " << endl << "Hat Size: " << hatSize << endl << "Jacket Size: " << jacketSize << " inches\nWaist Size: " << waistSize << " inches.\n\n";

        cout << " Would you like to enter another set of numbers? (Y/N): ";
        cin >> cont;

    }while (cont != 'N');

}

double hatSizeCalc(double weight, double heightInches)
{
    double hatSize = weight / heightInches;
    return hatSize;
}

double jacketSizeCalc(double weight, double heightInches, int age)
{
    double jacketSize;
    double inchesAdded = 0;

    if (age > 30)
    {
        inchesAdded = .125 * ((age - 30) / 10);
    }

    jacketSize = ((heightInches * weight) / 288) + inchesAdded;
    return jacketSize;
}

double waistSizeCalc(double weight, int age)
{
    double waistSize;
    double inchesAdded = 0;

    if (age > 28)
    {
        inchesAdded = ((age - 28) / 2) * .1;
    }

    waistSize = (weight / 3.7) + inchesAdded;
    return waistSize;
    
}
#include <iostream>

int main()
{
    //Namespace declarations
    using std::cout;
    using std::cin;
    using std::endl;

    //Variable declarations
    int num1, num2, num3, num4, num5;
    double sum, average;
    double num1d ,num2d, num3d, num4d, num5d;

    cout << "Enter 5 decimal numbers: ";
    cin >> num1d >> num2d >> num3d >> num4d >> num5d;

    //Prints 5 decimals
    cout << "The decimals you entered are: " << num1d << ", " << num2d << ", " << num3d << ", " << num4d << ", " << num5d << "\n";

    //Converts all nums to integers;
    num1 = static_cast<int>(num1d);
    num2 = static_cast<int>(num2d);
    num3 = static_cast<int>(num3d);
    num4 = static_cast<int>(num4d);
    num5 = static_cast<int>(num5d);

    sum = num1+num2+num3+num4+num5;
    average = sum/5;

    cout << "The sum of the integers is " << sum << " and the average is " << average << endl;

    return 0;

}
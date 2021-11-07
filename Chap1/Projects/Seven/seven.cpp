#include <iostream>
using namespace std;

int main()
{
    double weight;
    double mets;
    double minutesSpent;
    double caloriesPerMinute;
    double kilograms;

    cout << "Please enter your weight in pounds: ";
    cin >> weight;

    cout << "Enter the number of METS for your activity: ";
    cin >> mets;

    cout << "Enter the number of minutes spent on the activity";
    cin >> minutesSpent;

    kilograms = weight / 2.2;

    caloriesPerMinute = .0175 * mets * kilograms;

    double totalCalories = caloriesPerMinute * minutesSpent;

    cout << "You burned " << totalCalories << " calories during your workout." << endl;

    return 0;
}
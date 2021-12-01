#include <iostream>
using namespace std;
void inputKilograms(double& kilograms, double& grams);
void calculateKilogramsToPounds(double kilograms, double grams, double& pounds, double& ounces);
void outputPounds(double pounds, double ounces);
int main()
{
    double pounds, kilograms, grams, ounces;
    char cont;

    do
    {
        inputKilograms(kilograms, grams);
        calculateKilogramsToPounds(kilograms, grams, pounds, ounces);
        outputPounds(pounds, ounces);
        cout << "Would you like to repeat the calculation?";
        cin >> cont;
    } while (cont == 'y');
    
}

void inputKilograms(double& kilograms, double& grams)
{
    cout << "Enter kilograms: ";
    cin >> kilograms;
    cout << "Enter grams: ";
    cin >> grams;
    return;
}
void calculateKilogramsToPounds(double kilograms, double grams, double& pounds, double& ounces)
{
    double totalGrams = (kilograms * 1000) + grams;
    ounces = totalGrams * 0.035274;
    pounds = static_cast<int>(ounces / 16);
    ounces = ounces - (pounds * 16);
    return;
}
void outputPounds(double pounds, double ounces)
{
    cout << "Your weight converts to " << pounds << " pounds and " << ounces << " ounces." << endl;
    return;
}
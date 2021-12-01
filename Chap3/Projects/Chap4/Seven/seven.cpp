#include <iostream>
using namespace std;
void inputPounds(double& pounds, double& ounces);
void calculatePoundsToKilograms(double pounds, double ounces, double& kilograms, double& grams);
void outputKilograms(double kilograms, double grams);
int main()
{
    double pounds, kilograms, grams, ounces;
    char cont;

    do
    {
        inputPounds(pounds, ounces);
        calculatePoundsToKilograms(pounds, ounces, kilograms, grams);
        outputKilograms(kilograms, grams);
        cout << "Would you like to repeat the calculation?";
        cin >> cont;
    } while (cont == 'y');
    
}

void inputPounds(double& pounds, double& ounces)
{
    cout << "Enter pounds: ";
    cin >> pounds;
    cout << "Enter ounces: ";
    cin >> ounces;
    return;
}
void calculatePoundsToKilograms(double pounds, double ounces, double& kilograms, double& grams)
{
    double totalOunces = (pounds * 16) + ounces;
    grams = totalOunces * 28.3495;
    kilograms = static_cast<int>(grams / 1000);
    grams = grams - (kilograms * 1000);
    return;
}
void outputKilograms(double kilograms, double grams)
{
    cout << "Your weight converts to " << kilograms << " kilograms and " << grams << " grams." << endl;
    return;
}
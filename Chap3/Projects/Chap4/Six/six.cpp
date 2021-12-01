#include <iostream>
using namespace std;
void feetToMeters();
void inputFeet (double& feet, double& inches);
void calculateFeetToMeters(double feet, double inches, double& meters, double& centimeters);
void outputMeters (double meters, double centimeters);
void metersToFeet();
void inputMeters (double& meters, double& centimeters);
void calculateMetersToFeet(double meters, double centimeters, double& feet, double& inches);
void outputFeet (double feet, double inches);

int main()
{
    char cont;
    int selection;
    do
    {
        cout << "Would you like to convert feet to meters or meters to feet (1/2): ";
        cin >> selection;

        if (selection == 1)
        {
            feetToMeters();
        }
        else if (selection == 2)
        {
            metersToFeet();
        }

        cout << "Would you like to make another conversion? (y/n): ";
        cin >> cont;
        
    }while (cont == 'y');
    return 0;
}

void feetToMeters()
{
    double feet, inches, meters, centimeters;
    char cont;
    inputFeet(feet, inches);
    calculateFeetToMeters(feet, inches, meters, centimeters);
    outputMeters(meters, centimeters);
    return;
}

void inputFeet (double& feet, double& inches)
{
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
    return;
}

void calculateFeetToMeters(double feet, double inches, double& meters, double& centimeters)
{
    double totalInches = (feet * 12) + inches;
    centimeters = totalInches * 2.54;
    meters = static_cast<int>(centimeters / 100);
    centimeters = centimeters - (meters * 100);
    return;
}
void outputMeters (double meters, double centimeters)
{
    cout << "Your measurement is equivalent to " << meters << " meters and " << centimeters << " centimeters" << endl;
    return;
}
void metersToFeet()
{
    double feet, inches, meters, centimeters;
    char cont;
    inputMeters(meters, centimeters);
    calculateMetersToFeet(meters, centimeters, feet, inches);
    outputFeet(feet, inches);
    return;
}

void inputMeters (double& meters, double& centimeters)
{
    cout << "Enter meters: ";
    cin >> meters;
    cout << "Enter centimeters: ";
    cin >> centimeters;
    return;
}
void calculateMetersToFeet(double meters, double centimeters, double& feet, double& inches)
{
    double totalCentimeters = (meters * 100) + centimeters;
    inches = totalCentimeters * 0.393701;
    feet = static_cast<int>(inches / 12);
    inches = inches - (feet * 12);
    return;

}
void outputFeet (double feet, double inches)
{
    cout << "Your measurement is equivalent to " << feet << " feet and " << inches << " inches" << endl;
    return;
}
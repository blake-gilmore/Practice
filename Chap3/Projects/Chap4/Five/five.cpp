#include <iostream>
using namespace std;
void input (double& meters, double& centimeters);
void calculate(double meters, double centimeters, double& feet, double& inches);
void output (double feet, double inches);


int main()
{
    double feet, inches, meters, centimeters;
    char cont;
    do
    {
        input(meters, centimeters);
        calculate(meters, centimeters, feet, inches);
        output(feet, inches);
        cout << "Do you want to go again?: ";
        cin >> cont;
    }while (cont == 'y');
}

void input (double& meters, double& centimeters)
{
    cout << "Enter meters: ";
    cin >> meters;
    cout << "Enter centimeters: ";
    cin >> centimeters;
    return;
}
void calculate(double meters, double centimeters, double& feet, double& inches)
{
    double totalCentimeters = (meters * 100) + centimeters;
    inches = totalCentimeters * 0.393701;
    feet = static_cast<int>(inches / 12);
    inches = inches - (feet * 12);
    return;

}
void output (double feet, double inches)
{
    cout << "Your measurement is equivalent to " << feet << " meters and " << inches << " centimeters" << endl;
    return;
}
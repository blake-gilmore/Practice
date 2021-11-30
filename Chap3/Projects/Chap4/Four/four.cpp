#include <iostream>
using namespace std;
void input (double& feet, double& inches);
void calculate(double feet, double inches, double& meters, double& centimeters);
void output (double meters, double centimeters);


int main()
{
    double feet, inches, meters, centimeters;
    char cont;
    do
    {
        input(feet, inches);
        calculate(feet, inches, meters, centimeters);
        output(meters, centimeters);
        cout << "Do you want to go again?: ";
        cin >> cont;
    }while (cont == 'y');
}

void input (double& feet, double& inches)
{
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
    return;
}
void calculate(double feet, double inches, double& meters, double& centimeters)
{
    double totalInches = (feet * 12) + inches;
    centimeters = totalInches * 2.54;
    meters = static_cast<int>(centimeters / 100);
    centimeters = centimeters - (meters * 100);
    return;

}
void output (double meters, double centimeters)
{
    cout << "Your measurement is equivalent to " << meters << " meters and " << centimeters << " centimeters" << endl;
    return;
}
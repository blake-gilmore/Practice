#include <iostream>
using namespace std;

const double GRAVITATIONAL_CONSTANT = 6.673e-8;

double gravityCalc (double massOne, double massTwo, double distance);
int main()
{
    double massOne, massTwo, distance, gravitationalForce;
    char cont;


    do
    {
    
        cout << "Enter the mass of the first object: ";
        cin >> massOne;

        cout << "Enter the mass of the second object: ";
        cin >> massTwo;

        cout << "Enter the distance between them:";
        cin >> distance;

        gravitationalForce = gravityCalc(massOne, massTwo, distance);

        cout << "The gravitational force between the two objects is " << gravitationalForce << " dynes." << endl << endl
        << "Would you like to input another set of objects? (Y/N): ";
        cin >> cont;

    } while (cont != 'N');

    return 0;


}

double gravityCalc (double massOne, double massTwo, double distance)
{
    double gravitationalForce = (massOne * massTwo * GRAVITATIONAL_CONSTANT) / (distance * distance);
    return gravitationalForce;
}

#include <iostream>
#include <cmath>

using namespace std;
double calculateFactor( double windSpeed, double temperature);

int main()
{
    double windSpeed, temperature, chillFactor;

    cout << "Enter the wind speed: ";
    cin >> windSpeed;

    do
    {
        cout << "Enter the temperature in degrees Celsius: ";
        cin >> temperature;

        if (temperature > 10)
            cout << "Invalid temperature, please enter a temperature under 10 degrees celsius.\n";

    } while (temperature > 10);

    chillFactor = calculateFactor(windSpeed, temperature);

    cout << "The chill factor for " << temperature << " degrees celsius is " << chillFactor << endl;
}

double calculateFactor(double windSpeed, double temperature)
{
    double chillFactor;

    chillFactor = 33 - ((((10 * sqrt(windSpeed)) - windSpeed + 10.5) * (33 - temperature)) / 23.1);

    return chillFactor;
}
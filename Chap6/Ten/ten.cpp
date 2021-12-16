#include <iostream>
using namespace std;
class Temperature
{
public:
    void setTempKelvin(double temp);
    void setTempFahrenheit(double temp);
    void setTempCelsius(double temp);
    double getTempKelvin();
    double getTempFahrenheit();
    double getTempCelsius();
    void input();
private:
    double kelvin;
};
int main()
{
    Temperature temp;
    temp.input();
    cout << "Kelvin: " << temp.getTempKelvin() << endl
    << "Celsius: " << temp.getTempCelsius() << endl
    << "Fahrenheit: " << temp.getTempFahrenheit() << endl;

    return 0;
}
void Temperature::setTempKelvin(double temp)
{
    kelvin = temp;
    return;
}
void Temperature::setTempFahrenheit(double temp)
{
    kelvin = (5.0 / 9) * (temp - 32) + 273.15;
    return;
}
void Temperature::setTempCelsius(double temp)
{
    kelvin = temp + 273.15;
    return;
}
double Temperature::getTempKelvin()
{
    return kelvin;
}
double Temperature::getTempFahrenheit()
{
    return (((kelvin - 273.15) / (5.0 / 9)) + 32);
}
double Temperature::getTempCelsius()
{
    return (kelvin - 273.15);
}
void Temperature::input()
{
    int selection;
    double temp;
    cout << "Enter temp: ";
    cin >> temp;
    cout << "Kelvin, Celsius, or Fahrenheit? 1-3";
    cin >> selection;
    if (selection ==1)
        setTempKelvin(temp);
    else if (selection == 2)
    {
        setTempCelsius(temp);
    }
    else if (selection == 3)
    {
        setTempFahrenheit(temp);
    }
    return;     
}
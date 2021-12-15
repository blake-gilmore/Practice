#include <iostream>
using namespace std;

class Fraction
{
public:
    void setNumerator(int num);
    void setDenominator(int denom);
    double getDecimal();
    void outputReduced();
private:
    int numerator, denominator;
};
int findCommonDenominator(int num, int denom);
int main()
{
    Fraction fraction;
    int numerator, denominator;
    double decimal;
    cout << "Enter a numerator: ";
    cin >> numerator;
    fraction.setNumerator(numerator);
    cout << "Enter denominator: ";
    cin >> denominator;
    fraction.setDenominator(denominator);
    fraction.outputReduced();
    cout << "The decimal version is: ";
    decimal = fraction.getDecimal();
    cout << decimal << endl;
    return 0;
}

int findCommonDenominator(int num, int denom)
{
    int common(1);
    for (int i = 1; i <= num; i++)
    {
        if (((num % i) == 0) && ((denom % i) == 0))
        {
            common = i;
        }
    }

    return common;
}
void Fraction::setNumerator(int num)
{
    numerator = num;
    return;
}
void Fraction::setDenominator(int denom)
{
    denominator = denom;
    return;
}
double Fraction::getDecimal()
{
    return (numerator / static_cast<double>(denominator));
}
void Fraction::outputReduced()
{
    int common = findCommonDenominator(numerator, denominator);
    cout << numerator << "/" << denominator << " reduced is " << (numerator / common) << "/" << (denominator / common) << endl;
    return;
}
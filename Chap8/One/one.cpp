#include <iostream>
using namespace std;
class Rational
{
public:
    Rational(int num, int denom);
    Rational(int wholeNumber);
    Rational();
    bool operator == (const Rational& numTwo) const;
    bool operator < (const Rational& numTwo) const;
    bool operator <= (const Rational& numTwo) const;
    bool operator > (const Rational& numTwo) const;
    bool operator >= (const Rational& numTwo) const;
    const Rational operator + (const Rational& numTwo);
    const Rational operator - (const Rational& numTwo);
    const Rational operator * (const Rational& numTwo);
    const Rational operator / (const Rational& numTwo);
    friend istream& operator >> (istream& ins, Rational& fraction);
    friend ostream& operator << (ostream& ost, Rational& fraction);
    int getDenominator() const;
    int getNumerator() const;
    void setNumerator(int num);
    void setDenominator(int denom);

private:
    int numerator, denominator;
    void normalize();
    double getDecimalValue() const;
};
int main()
{
    Rational num1, num2, tempNum;
    cout << "Enter the first rational: ";
    cin >> num1;
    cout << "The number you entered is " << num1 << endl;
    cout << "Enter the second number you want to test: ";
    cin >> num2;
    cout << "The number you entered is " << num2 << endl;
    tempNum = num1 + num2;
    cout << num1 << " + " << num2 << " is " << tempNum << endl;
    tempNum = num1 - num2;
    cout << num1 << " - " << num2 << " is " << tempNum << endl;
    tempNum = num1 * num2;
    cout << num1 << " * " << num2 << " is " << tempNum << endl;
    tempNum = num1 / num2;
    cout << num1 << " / " << num2 << " is " << tempNum << endl;
    cout << num1 << " is ";
    if (num1 == num2)
    {
    }
    else
    {
        cout << " not ";
    }
    cout << " equal to " << num2 << endl;
    return 0;
}

Rational::Rational(int num, int denom)
{
    numerator = num;
    denominator = denom;
    return;
}
Rational::Rational(int wholeNumber)
{
    numerator = wholeNumber;
    denominator = 1;
    return;
}
Rational::Rational()
{
    numerator = 0;
    denominator = 1;
    return;
}
bool Rational::operator == (const Rational& numTwo) const
{
    if (getDecimalValue() == numTwo.getDecimalValue())
        return true;
    else
        return false;
}
bool Rational::operator < (const Rational& numTwo) const
{
    if (getDecimalValue() < numTwo.getDecimalValue())
        return true;
    else
        return false;
}
bool Rational::operator <= (const Rational& numTwo) const
{
    if (getDecimalValue() <= numTwo.getDecimalValue())
        return true;
    else
        return false;
}
bool Rational::operator > (const Rational& numTwo) const
{
    if (getDecimalValue() > numTwo.getDecimalValue())
        return true;
    else
        return false;
}
bool Rational::operator >= (const Rational& numTwo) const
{
    if (getDecimalValue() >= numTwo.getDecimalValue())
        return true;
    else
        return false;
}
const Rational Rational::operator + (const Rational& numTwo) 
{
    Rational newNum;
    if (denominator == numTwo.denominator)
    {
        newNum.denominator = (denominator);
        newNum.numerator = (numerator + numTwo.numerator);
    }
    else if (denominator != numTwo.denominator)
    {
        newNum.numerator = ((numerator*numTwo.denominator) + (numTwo.numerator * denominator));
        newNum.denominator = (denominator * numTwo.denominator);
    }
    newNum.normalize();
    return newNum;
}
const Rational Rational::operator - (const Rational& numTwo)
{
    Rational newNum;
    if (denominator == numTwo.denominator)
    {
        newNum.denominator = (denominator);
        newNum.numerator = (numerator - numTwo.numerator);
    }
    else
    {
        newNum.numerator = ((numerator*numTwo.denominator) - (numTwo.numerator * denominator));
        newNum.denominator = (denominator * numTwo.denominator);
    }
    newNum.normalize();
    return newNum;
}
const Rational Rational::operator * (const Rational& numTwo)
{
    Rational newNum;
    newNum.numerator = (numerator * numTwo.numerator);
    newNum.denominator = denominator * numTwo.denominator;
    newNum.normalize();
    return newNum;
}
const Rational Rational::operator / (const Rational& numTwo)
{
    Rational newNum;
    newNum.numerator = numerator * numTwo.denominator;
    newNum.denominator = denominator * numTwo.numerator;
    newNum.normalize();
    return newNum;
}
istream& operator >> (istream& ins, Rational& fraction)
{
    int tempNum, tempDenom;
    char division;
    ins >> tempNum >> division >> tempDenom;
    fraction.numerator = tempNum;
    fraction.denominator = tempDenom;
    return ins;
}
ostream& operator << (ostream& ost, Rational& fraction)
{
    ost << fraction.numerator << "/" << fraction.denominator;
    return ost;
}
double Rational::getDecimalValue() const
{
    return (static_cast<double>(numerator) / denominator);
}
int Rational::getDenominator() const
{
    return denominator;
}
int Rational::getNumerator() const
{
    return numerator;
}
void Rational::setNumerator(int num)
{
    numerator = num;
    return;
}
void Rational::setDenominator(int denom)
{
    denominator = denom;
    return;
}
void Rational::normalize()
{
    int commonDenominator(1);
    bool isSimplified;
    if (numerator < 0 && denominator < 0)
    {
        denominator*=-1;
    }
    else if (numerator >= 0 && denominator < 0)
    {
        denominator*=-1;
        numerator*=-1;
    }
    do
    {
        isSimplified = false;
        commonDenominator = 1;
        for (int i = 2; i <= numerator; i++)
        {
            if ((numerator % i) == 0 && (denominator % i) == 0)
            {
                commonDenominator = i;
                isSimplified = true;
            }
        }
        numerator /= commonDenominator;
        denominator /= commonDenominator;
    } while (isSimplified);
    return;
}
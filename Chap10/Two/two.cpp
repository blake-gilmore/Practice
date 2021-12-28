#include <iostream>
#include <fstream>
#include <cmath>
using std::cout;
using std::cin;
using std::ostream;
using std::endl;
typedef int* intPtr;
class Polynomial
{
public:
    Polynomial& operator = (const Polynomial& rSide);
    Polynomial (const Polynomial& old);
    Polynomial(int coefficients[], int size);
    Polynomial();
    ~Polynomial();
    Polynomial operator + (const Polynomial& rSide) const;
    Polynomial operator + (int rSide) const;
    friend Polynomial operator + (int lSide, const Polynomial& rSide);
    Polynomial operator - (const Polynomial& rSide) const;
    Polynomial operator - (int rSide) const;
    friend Polynomial operator - (int lSide, const Polynomial& rSide);
    Polynomial operator * (const Polynomial& rSide) const;
    Polynomial operator * (int rSide) const;
    friend Polynomial operator * (int lSide, const Polynomial& rSide);
    friend ostream& operator << (ostream& out, const Polynomial& rSide);
    void setCoefficient(int co, int exp);
    int getCoefficient(int exp) const;
    double evaluateFunction(double num) const;
private:
    intPtr coefficients;
    int numOfValues;
};
int main()
{
   Polynomial expression;
    
    int selection;
    intPtr temp;
    int size;
    cout << "Enter the highest exponent: ";
    cin >> selection;
    size = selection + 1;
    
    temp = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the coefficient to the exponent of " << i << " ";
        cin >> selection;
        temp[i] = selection;
    }
    Polynomial first(temp, size);
    
    delete[] temp;
    cout << "Enter the highest exponent for the second polynomial: ";
    cin >> selection;
    size = selection + 1;
    temp = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the coefficient to the exponent of " << i;
        cin >> selection;
        temp[i] = selection;
    }
    
    Polynomial second(temp, size);
    cout << "First polynomial: " << first << endl;
    cout << "Second polynomial: " << second << endl;
    cout << "First polynomial plus the second polynomial: ";
    expression = first + second;
    cout << expression << endl;
    cout << "First polynomial plus 5: " << first + 5 << endl;
    cout << "5 plus first polynomial: " << 5 + first << endl;
    cout << "First polynomial minus second: " << first - second << endl;
    cout << "Second polynomial minus first: " << second - first << endl;
    cout << "First polynomial minus 15: " << first - 15 << endl;
    cout << "First polynomial times second polynomial: " << first * second << endl;
    cout << "Second polybomial times first polynomial: " << second * first << endl;
    cout << "First polynomial times 5: " << first * 5 << endl;
    cout << "5 times first polynomial: " << 5 * first << endl;
    cout << endl << endl;
    cout << "Enter the number to plug in to the first: ";
    cin >> selection;
    first.evaluateFunction(selection);

    return 0;
    
}
Polynomial& Polynomial::operator = (const Polynomial& rSide)
{
    delete [] coefficients;
    numOfValues = rSide.numOfValues;
    coefficients = new int[numOfValues];
    for (int i = 0; i < numOfValues; i++)
        coefficients[i] = rSide.coefficients[i];
    return *this;
}
Polynomial::Polynomial (const Polynomial& old)
{
    numOfValues = old.numOfValues;
    coefficients = new int[numOfValues];
    for (int i = 0; i < numOfValues; i++)
        coefficients[i] = old.coefficients[i];
    return;
}
Polynomial::Polynomial(int co[], int size)
{
    numOfValues = size;
    coefficients = new int[numOfValues];
    for (int i = 0; i < numOfValues; i++)
        coefficients[i] = co[i];
    return;
}
Polynomial::Polynomial()
{
    int list[1] = {0};
    coefficients = new int[1];
    coefficients[0] = 1;

    return;
}
Polynomial::~Polynomial()
{
    delete[] coefficients;
    coefficients = nullptr;
}
Polynomial Polynomial::operator + (const Polynomial& rSide) const
{
    Polynomial returned;
    int biggestExponent;
    if (numOfValues >= rSide.numOfValues)
        biggestExponent = numOfValues;
    else
        biggestExponent = rSide.numOfValues;

    returned.numOfValues = biggestExponent;
    delete[] returned.coefficients;
    returned.coefficients = new int[biggestExponent];
    for (int i = 0; i < biggestExponent; i++)
        returned.coefficients[i] = 0;
        
    for (int i = 0; i < biggestExponent; i++)
    {
        if (numOfValues > i)
            returned.coefficients[i] += coefficients[i];
        if (rSide.numOfValues > i)
            returned.coefficients[i] += rSide.coefficients[i];
    }
    return returned;
}
Polynomial Polynomial::operator + (int rSide) const
{
    Polynomial returned;
    returned.numOfValues = numOfValues;
    delete[]returned.coefficients;
    returned.coefficients = new int[numOfValues];
    for (int i = 0; i < numOfValues; i++)
    {
        returned.coefficients[i] = coefficients[i];
    }
    returned.coefficients[0]+=rSide;
    return returned;
}
Polynomial operator + (int lSide, const Polynomial& rSide)
{
    Polynomial returned;
    returned = rSide;
    returned.coefficients[0] += lSide;
    return returned;
}
Polynomial Polynomial::operator - (const Polynomial& rSide) const
{
    Polynomial returned;
    int biggestExponent;
    if (numOfValues >= rSide.numOfValues)
        biggestExponent = numOfValues;
    else
        biggestExponent = rSide.numOfValues;

    returned.numOfValues = biggestExponent;
    delete[] returned.coefficients;
    returned.coefficients = new int[biggestExponent];
    for (int i = 0; i < biggestExponent; i++)
        returned.coefficients[i] = 0;
    for (int i = 0; i < biggestExponent; i++)
    {
        if (numOfValues > i && rSide.numOfValues > i)
            returned.coefficients[i] = coefficients[i] - rSide.coefficients[i];
        else if (numOfValues > i && rSide.numOfValues <= i)
            returned.coefficients[i] = coefficients[i];
        else if (numOfValues <= i && rSide.numOfValues > i)
            returned.coefficients[i] = -rSide.coefficients[i];
    }
    return returned;
}
Polynomial Polynomial::operator - (int rSide) const
{
    Polynomial returned;
    returned.numOfValues = numOfValues;
    returned.coefficients = new int[numOfValues];
    returned.coefficients[0]-=rSide;
    return returned;
}
Polynomial operator - (int lSide, const Polynomial& rSide)
{
    Polynomial returned;
    returned = rSide;
    returned.coefficients[0] -= lSide;
    return returned;
}
Polynomial Polynomial::operator * (const Polynomial& rSide) const
{
    int highestPoly, largestNum;
    Polynomial returned;
    const Polynomial* largest;
    const Polynomial* smallest;
    highestPoly = (numOfValues - 1) + (rSide.numOfValues - 1);
    if (numOfValues >= rSide.numOfValues)
    {
        largestNum = numOfValues;
        largest = this;
        smallest = &rSide;
    }
    else
    {
        largestNum = rSide.numOfValues;
        largest = &rSide;
        smallest = this;
    }
    returned.numOfValues = largest->numOfValues + smallest->numOfValues;
    delete[] returned.coefficients;
    returned.coefficients = new int[returned.numOfValues];
    for (int i = 0; i < returned.numOfValues; i++)
        returned.coefficients[i] = 0;
    for (int i = (largest->numOfValues) - 1; i>= 0; i--)
    {
        for (int j = (smallest->numOfValues) - 1; j >= 0; j--)
        {
            returned.coefficients[i + j] += largest->coefficients[i] * smallest->coefficients[j];
        }
    }
    largest = nullptr;
    smallest = nullptr;
    return returned;
}
Polynomial Polynomial::operator * (int rSide) const
{
    Polynomial returned;
    returned = *this;
    for (int i = 0; i < numOfValues; i++)
    {
        returned.coefficients[i] *= rSide;
    }
    return returned;
}
Polynomial operator * (int lSide, const Polynomial& rSide)
{
    Polynomial returned;
    returned = rSide;
    for (int i = 0; i < returned.numOfValues; i++)
    {
        returned.coefficients[i] *= lSide;
    }
    return returned;
}
void Polynomial::setCoefficient(int co, int exp)
{
    if (exp >= numOfValues)
    {
        Polynomial temp;
        temp = *this;
        delete[] coefficients;
        numOfValues = exp + 1;
        coefficients = new int[numOfValues];
        for (int i = 0; i < numOfValues; i++)
        {
            coefficients[i] = 0;
        }
        for (int i = 0; i < numOfValues; i++)
        {
            if (i < temp.numOfValues)
            {
                coefficients[i] = temp.coefficients[i];
            }
        }
        coefficients[exp + 1] = co;
    }
    else
        coefficients[exp + 1] = co;
    return;
}
int Polynomial::getCoefficient(int exp) const
{
    if (exp >= numOfValues)
    {
        cout << "Too high";
        return 0;
    }
    else
        return coefficients[exp];
}
double Polynomial::evaluateFunction(double num) const
{
    double total(0);
    for (int i = 0; i < numOfValues; i++)
    {
        total += (pow(num, i) * coefficients[i]);
    }
    cout << "Evaluated: " << total << endl;
    return total;
}
ostream& operator << (ostream& out, const Polynomial& rSide) 
{
    for (int i = rSide.numOfValues - 1; i >= 0; i--)
    {
        if (rSide.coefficients[i] != 0)
        {
            out << rSide.coefficients[i] << "x^" << i << " ";
        }
        else
        {
        }
    }
    return out;
}

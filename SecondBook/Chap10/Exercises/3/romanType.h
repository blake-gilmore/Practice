#include <string>
#include <iostream>
using std::string;
class romanType
{
public:
    romanType(string = "", double = 0.0);
    void setRoman(string);
    void printEither() const;

private:
    string romanNumeral;
    double romanToDecimal;
    void set(string, double);
    void convertToDecimal();
};
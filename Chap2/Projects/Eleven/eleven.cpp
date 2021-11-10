#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputStream;
    inputStream.open("listofnames.txt");
    string firstName;
    string lastName;
    int feet;
    int inches;
    int additionalInches;
    int additionalFeet;
    int idealWeight;

    while (inputStream >> firstName)
    {
        inputStream >> lastName;
        inputStream >> feet;
        inputStream >> inches;
        idealWeight = 110;

        additionalFeet = feet - 5;
        inches = inches + (additionalFeet * 12);
        idealWeight = idealWeight + (inches * 5);

        cout << "The ideal body weight for " << firstName << " " << lastName << " is " << idealWeight << " pounds." << endl;
    }
    return 0;
}
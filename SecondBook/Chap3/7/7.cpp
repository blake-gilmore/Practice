#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;
    using std::ifstream;
    using std::ofstream;
    string first, last;
    double percent, salary;

    ifstream inFile;
    ofstream oFile;
    inFile.open("text.txt");
    oFile.open("output.dat");

    oFile << std::fixed << std::showpoint << std::setprecision(2);


    inFile >> first >> last >> salary >> percent;
    salary = salary + (salary*(percent*.001));


    oFile << first << " " << last << " " << salary << endl;

    inFile >> first >> last >> salary >> percent;
    salary = salary + (salary*(percent*.001));


    oFile << first << " " << last << " " << salary << endl;

    inFile >> first >> last >> salary >> percent;
    salary = salary + (salary*(percent*.001));


    oFile << first << " " << last << " " << salary << endl;

    return 0;
}
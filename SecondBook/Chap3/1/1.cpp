#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

const double PI = 3.1415;
int main()
{
    using std::ifstream;
    using std::ofstream;
    using std::endl;
    using std::string;
    ifstream inFile;
    ofstream outFile;

    double length, width;
    double balance, interest;
    string first, last;
    int age;
    char letter;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    inFile >> length >> width;
    outFile << "Rectangle:\n"
            << "Length = " << length << ", width = " << width << ", area = " << width*length << ", parameter = " << width*2+length*2 << endl
            << endl;

    inFile >> length;
    outFile << "Circle:\n"
            << "Radius = " << length << ", area = " << 2*PI*length*length << ", circumference = " << 2*PI*length << endl;

    inFile >> first >> last >> age;
    outFile << "Name: " << first << " " << last << ", age: " << age << endl;

    inFile >> balance >> interest;

    outFile << "Beginning balance = $" << balance << ", interest rate = " << interest << endl;
    outFile << "Balance at the end of the month = $" << balance + (balance*(interest*.001)) << endl;

    inFile >> letter;
    letter++;
    outFile << letter;

    inFile.close();
    outFile.close();

    return 0;
}
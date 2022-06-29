#include "addressBook.h"
#include <fstream>
#include <string>

addressBook::addressBook()
{   
    numAddresses = 0;
    return;
}
void addressBook::loadData(ifstream& input)
{
    string first, second;
    string tempString;
    int num1, num2, num3;
    input >> first >> second;
    while (input)
    {
        getline(input, tempString);
        people[numAddresses].setName(first, second);
        getline(input, tempString);
        people[numAddresses].setAddress(tempString);
        input >> tempString;
        people[numAddresses].setCity(tempString);
        getline(input, tempString);
        input >> tempString;
        people[numAddresses].setState(tempString);
        getline(input, tempString);
        input >> tempString;
        people[numAddresses].setZipCode(tempString);
        getline(input, tempString);
        input >> num1 >> num2 >> num3;
        getline(input,tempString);
        people[numAddresses].setDate(num1, num2, num3);
        getline(input, tempString);
        people[numAddresses].setType(tempString);
        input >> tempString;
        people[numAddresses].setPhoneNumber(tempString);
        getline(input, tempString);
        input >> first >> second;
        numAddresses++;
    }
    return;
}
void addressBook::printData()
{
    for (int i = 0; i < numAddresses; i++)
    {
        people[i].printInformation();
    }
    cout << endl;
    return;
}
void addressBook::searchPerson(string)
{

    return;
}
void addressBook::sortData()
{

    return;
}
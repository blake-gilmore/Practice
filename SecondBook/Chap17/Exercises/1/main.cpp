#include <iostream>
#include <fstream>
#include "extPersonType.h"
#include "linkedListType.h"
void printMenu();

void writeToFile(linkedListType<extPersonType>& );

int main()
{
    linkedListType<extPersonType> addressBook;
    extPersonType newGuy;
    int choice;
    std::string fileName;
    do
    {
        printMenu();
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                newGuy.setInformation();
                addressBook.addToBack(newGuy);
                break;
            case 2:
                std::cout << addressBook;
                break;
            case 3:

            case 4:
                writeToFile(addressBook);
                break;

            default:
                std::cout << "Invalid entry\n";
                break;
        }
    }while (true);
    
    return 0;
}

void printMenu()
{
    std::cout << "1. Add to address book\n"
              << "2. Print Address book\n"
              << "3. Delete entry\n"
              << "4. Save address book\n";
}

void writeToFile(linkedListType<extPersonType>& itemToWrite)
{
    std::cout << "Enter the name of the file to write to: ";
    std::string fileName;
    std::cin >> fileName;

    std::ofstream outputFile(fileName);
    outputFile << itemToWrite;
    return;
}


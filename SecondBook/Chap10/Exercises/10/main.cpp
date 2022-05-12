#include <iostream>
#include "BOOKTYPE.H"
void showSelection();

int main()
{
    //Namespace Usages
    using std::cin;
    using std::cout;
    using std::endl;
    
    //Variable Declarations
    int choice;
    int bookPosition;
    int tempInt;
    int tempInt2;
    string tempString;
    bookType library[100];

    //Initialize Menu and get user input
    cout << "Welcome to the book store. Please select an item from the menu.";
    showSelection();
    cin >> choice;

    while (choice != 9)
    {
        switch (choice)
        {
        case 1:
            //User adds a book through typin in a number of items
            //Check if library is full
            bookPosition = bookType::getTotalNumBooks();
            if (bookPosition == 100)
            {
                cout << "Sorry, but the book store is full. Please remove a book first.";
                break;
            }
            cout << "Enter the book title: ";
            cin >> tempString;
            library[bookPosition].setTitle(tempString);
            cout << "Enter the publisher name: ";
            cin >> tempString;
            library[bookPosition].setPublisher(tempString);
            cout << "Enter the ISBN number: ";
            cin >> tempString;
            library[bookPosition].setISBN(tempString);
            cout << "Enter the number of authors: ";
            cin >> tempInt;
            library[bookPosition].setAuthors(tempInt); 
            cout << "Enter number of copies available: ";
            cin >> tempInt;
            library[bookPosition].setCopiesAvailable(tempInt);
            break;
        case 2:
            cout << "1. Search by Title\n";
            cout << "2. Search by ISBN\n";
            cin >> tempInt;
            switch (tempInt)
            {
            case 1:
                cout << "Enter title: ";
                cin >> tempString;
                tempInt = 100;
                for (int i = 0; i < 100; i++)
                {
                    if (library[bookPosition].getTitle() == tempString)
                    {
                        tempInt = i;
                        break;
                    }
                }
                if (tempInt != 100)
                {
                    library[tempInt].printDetails();
                }
                else
                {
                    cout << "Could not find.\n";
                }
                break;
            case 2:
                cout << "Enter ISBN: ";
                cin >> tempString;
                tempInt = 100;
                for (int i = 0; i < 100; i++)
                {
                    if (library[bookPosition].getISBN() == tempString)
                    {
                        tempInt = i;
                        break;
                    }
                }
                if (tempInt != 100)
                {
                    library[tempInt].printDetails();
                }
                else
                {
                    cout << "Could not find.\n";
                }
                break;
                
            default:
            cout << "Invalid selection.";
            }
            break;
        case 3:
            cout << "1. Search by Title\n";
            cout << "2. Search by ISBN\n";
            cin >> tempInt;
            switch (tempInt)
            {
            case 1:
                cout << "Enter title: ";
                cin >> tempString;
                tempInt = 100;
                for (int i = 0; i < 100; i++)
                {
                    if (library[bookPosition].getTitle() == tempString)
                    {
                        tempInt = i;
                        break;
                    }
                }
                if (tempInt != 100)
                {
                    cout << "Enter copies update: ";
                    cin >> tempInt2;
                    library[bookPosition].updateStock(tempInt2);
                }
                else
                {
                    cout << "Could not find.\n";
                }
                break;
            case 2:
                cout << "Enter ISBN: ";
                cin >> tempString;
                tempInt = 100;
                for (int i = 0; i < 100; i++)
                {
                    if (library[bookPosition].getISBN() == tempString)
                    {
                        tempInt = i;
                        break;
                    }
                }
                if (tempInt != 100)
                {
                    cout << "Enter copies update: ";
                    cin >> tempInt2;
                    library[bookPosition].updateStock(tempInt2);
                }
                else
                {
                    cout << "Could not find.\n";
                }
                break;
                
            default:
            cout << "Invalid selection.";
            }
            break;
        default :
            cout << "Invalid selection." << endl;
        }

        showSelection();
        cin >> choice;
    }

    return 0;
}
void showSelection()
{
    using std::cout;
    using std::endl;
    cout << "1: Add a book" << endl;
    cout << "2: Search a book to print details" << endl;
    cout << "3: Update Copies of a book" << endl;
    cout << "9 to exit" << endl;
}
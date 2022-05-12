#include "memberType.h"
#include "BOOKTYPE.H"
#include <iostream>
void printMenu();
void addOccasional(memberType[]);
void addOften(memberType[]);
void updateOccasional(memberType[]);
void updateOften(memberType[]);
void addBook(bookType[]);
void updateBook(bookType[]);
void occasionalPurchase(memberType[], bookType[]);
void oftenPurchase(memberType[], bookType[]);
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    memberType occasional[500];
    memberType often[500];
    bookType Store[1000];

    int selection;
    int tempNum;
    printMenu();
    cin >> selection;
    while (selection != 9)
    {
        switch (selection)
        {
        //Add member
        case 1:
            if (memberType::memberCount == 500)
            {
                cout << "Members are full." << endl;
                break;
            }
            cout << "Occasional or often? (1/2)";
            cin >> tempNum;
            if (tempNum == 1)
                addOccasional(occasional);
            else
                addOften(often);
            break;
        //Update Member
        case 2:
            cout << "Occasional or often? (1/2)";
            cin >> tempNum;
            if (tempNum == 1)
                updateOccasional(occasional);
            else
                updateOften(often);
            break;
        //Add Book
        case 3:
            if (bookType::getTotalNumBooks() == 1000)
            {
                cout << "Books are full." << endl;
                break;
            }
            addBook(Store);
            break;
        //Update Book
        case 4:
            updateBook(Store);
            break;
        //Purchase Book
        case 5:
            cout << "Occasional or often? (1/2)";
            cin >> tempNum;
            if (tempNum == 1)
                occasionalPurchase(occasional, Store);
            else
                oftenPurchase(often, Store);
            break;
        default:
            cout << "Invalid. Try again." << endl;
        }
    }



}
void printMenu()
{
    using std::cout;
    using std::endl;
    cout << "1: Add Member" << endl
         << "2: Update Member Information" << endl
         << "3: Add Book" << endl
         << "4: Update Book Information" << endl
         << "5: Purchase Book" << endl
         << "9: Exit" << endl;
}
void addOccasional(memberType* occasional)
{
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;
    int positionInArray = memberType::occasionalCount;
    string tempString;
    cout << "Enter the name of the member: ";
    cin >> tempString;

    occasional[positionInArray].setName(tempString);
    cout << "Enter member id: ";
    cin >> tempString;
    occasional[positionInArray].setId(tempString);
    memberType::memberCount++;
    memberType::occasionalCount++;
    return;
}
void addOften(memberType* often)
{
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;
    int positionInArray = memberType::oftenCount;
    string tempString;
    cout << "Enter the name of the member: ";
    cin >> tempString;

    often[positionInArray].setName(tempString);
    cout << "Enter member id: ";
    cin >> tempString;
    often[positionInArray].setId(tempString);
    memberType::memberCount++;
    memberType::oftenCount++;
    return;
}
void addBook(bookType* books)
{
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;
    string tempString;
    int tempNum;
    double tempDoub;
    int positionInArray = bookType::getTotalNumBooks();
    cout << "Enter book title: ";
    cin >> tempString;
    books[positionInArray].setTitle(tempString);
    cout << "Enter number of authors: ";
    cin >> tempNum;
    books[positionInArray].setAuthors(tempNum);
    cout << "Enter publisher: ";
    cin >> tempString;
    books[positionInArray].setPublisher(tempString);
    cout << "Enter ISBN: ";
    cin >> tempString;
    books[positionInArray].setISBN(tempString);
    cout << "Enter year published: ";
    cin >> tempNum;
    books[positionInArray].setYearPublished(tempNum);
    cout << "Enter price: ";
    cin >> tempNum;
    books[positionInArray].setPrice(tempDoub);
    cout << "Enter copies: ";
    cin >> tempNum;
    books[positionInArray].setCopiesAvailable(tempNum);
    bookType::numBooks++;
    return;
}
void updateBook(bookType[])
{
    
}
void occasionalPurchase(memberType[], bookType[]);
void oftenPurchase(memberType[], bookType[]);
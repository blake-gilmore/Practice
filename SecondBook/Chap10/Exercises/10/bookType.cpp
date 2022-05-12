#include "BOOKTYPE.H"
#include <iostream>
int bookType::numBooks = 0;
bookType::bookType(string newTitle, string newPublisher, string newISBN, double newPrice, int newYear, int newCopies, int newAuthors)
{
    title = newTitle;
    publisher = newPublisher;
    ISBN = newISBN;
    yearPublished = newYear;
    price = newPrice;
    copies = newCopies;
    numAuthors = newAuthors;
    return;
}
string bookType::getTitle() const
{
    return title;
}
const string* bookType::getAuthor() const
{
    return authors;
}

int bookType::getNumAuthors() const
{
    return numAuthors;
}
string bookType::getPublisher() const
{
    return publisher;
}
string bookType::getISBN() const
{
    return ISBN;
}
double bookType::getPrice() const
{
    return price;
}
int bookType::getYearPublished() const
{
    return yearPublished;
}
int bookType::getCopiesAvailable() const
{
    return copies;
}

void bookType::setTitle(string newTitle)
{
    title = newTitle;
}
bool bookType::setAuthors(int newNumAuthors)
{
    using std::cout;
    using std::cin;
    string newAuthor;
    for (int i = 0; i < newNumAuthors; i++)
    {
        cout << "Enter author " << i;
        cin >> newAuthor;
        authors[i] = newAuthor;
    }
    return true;
}
void bookType::setPublisher(string newPublisher)
{
    publisher = newPublisher;
}
void bookType::setISBN(string newISBN)
{
    ISBN = newISBN;
}
void bookType::setPrice(double newPrice)
{
    price = newPrice;
}
void bookType::setYearPublished(int newYear)
{
    yearPublished = newYear;
}
void bookType::setCopiesAvailable(int newCopies)
{
    copies = newCopies;
}
bool bookType::checkTitle(string cmpTitle)
{
    if (title == cmpTitle)
    {
        return true;
    }
    else
        return false;
}
void bookType::printNumCopies()
{
    using std::cout;
    using std::endl;
    cout << "There are " << copies << " copies of " << title << endl;
    return;
}
void bookType::updateStock(int update)
{
    copies =+ update;
    return;
}

int bookType::getTotalNumBooks()
{
    return numBooks;
}

void bookType::printDetails() const
{
    using std::endl;
    using std::cout;
    cout << "Title: " << title << endl
         << "Author(s): " ;
    printAuthors();
    cout << "Publisher: " << publisher << endl;
    cout << "Number of Copies: " << copies << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "\n\n";
    return;
}
void bookType::printAuthors() const
{
    using std::cout;
    using std::endl;
    for (int i = 0; i < numAuthors; i++)
    {
        cout << authors[i];
        if (i != (numAuthors-1))
        {
            cout << ",";
        }
        cout << " ";
    }
    cout << endl;
    return;
}
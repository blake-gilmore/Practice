#ifndef BOOKTYPE_H
#define BOOKTYPE_H
#include <string>
using std::string;
class bookType
{
public:
    bookType(string = "", string = "", string = "", double = 0.0, int = 0, int = 0, int = 0);
    string getTitle() const;
    const string* getAuthor() const;
    int getNumAuthors() const;
    string getPublisher() const;
    string getISBN() const;
    double getPrice() const;
    int getYearPublished() const;
    int getCopiesAvailable() const;
    static int getTotalNumBooks();

    void setTitle(string);
    bool setAuthors(int);
    void setPublisher(string);
    void setISBN(string);
    void setPrice(double);
    void setYearPublished(int);
    void setCopiesAvailable(int);
    bool checkTitle(string);
    void printNumCopies();
    void updateStock(int);
    void printDetails() const;
    void printAuthors() const;


private:
    string title;
    string authors[4];
    string publisher;
    string ISBN;
    double price;
    int yearPublished;
    int numAuthors;
    int copies;
    static int numBooks;
};

#endif
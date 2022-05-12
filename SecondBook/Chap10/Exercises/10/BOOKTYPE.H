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

    void setTitle(string);
    void setAuthors(string[], int);
    void setPublisher(string);
    void setISBN(string);
    void setPrice(double);
    void setYearPublished(int);
    void setCopiesAvailable(int);


private:
    string title;
    string authors[4];
    string publisher;
    string ISBN;
    double price;
    int yearPublished;
    int numAuthors;
    int copies;
};
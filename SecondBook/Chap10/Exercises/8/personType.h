#include <string>
#include <iostream>

using namespace std;

class personType
{
public:
    void print() const;
    void setFirstName(string first);
    void setLastName(string last);
    void setMiddleName(string middle);
    void setName(string first, string last);
    string getFirstName() const;
    string getLastName() const;
    personType(string first = "", string last = "", string middle = "");
    bool isSameFirst(string first);
    bool isSameLast(string last);

private:
    string firstName;
    string lastName;
    string middleName;
};


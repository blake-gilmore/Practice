#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H
#include <string>
using std::string;

class memberType
{
public:
    memberType(string = "", string = "", int = 0, double = 0.0);
    string getName();
    string getid();
    int getNumBought();
    double getAmountSpent();
    void setName(string);
    void setId(string);
    void setNumBought(int);
    void setAmountSpent(int);

    void printName() const;
    void printNumBought() const;
    void printAmountSpent() const;
private:
    string name;
    string id;
    int numBought;
    double amountSpent;
};

#endif
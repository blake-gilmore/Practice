#ifndef H_BANKACCOUNT
#define H_BANKACCOUNT
#include <string>
using std::string;
class bankAccount
{
public:
    bankAccount(string = "", string = "", double = 0.0, double = 0.0);
    void printAccount() const;
    void setName(string);
    void setAccountType(string);
    void updateBalance();
    void setInterest(double);
private:
    string name;
    int accountNum;
    string accountType;
    double balance;
    double interest;
    static int nextAccount;
    static int assignNumber();
};

static int nextAccount = 0;
#endif
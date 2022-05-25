#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "bankAccount.h"
class checkingAccount: public bankAccount
{
public:
    checkingAccount();
    void calcInterest();
    void checkMinimumBalance();
    void setInterest(double);
    void setMinimumBalance(double);
    void setServiceCharge(double);
    void writeCheck(double);
    void withdraw(double);
    void print();
    double getInterest() const;
    double getMinimumBalance() const;
    double getServiceCharge() const;
private:
    double percentInterest;
    double serviceCharge;
    double minimumBalance;
};
#endif
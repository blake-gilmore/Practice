#include "bankAccount.h"
#include <iostream>

bankAccount::bankAccount(string newName, string newAccountType, double newBalance, double newInterest)
{
    name = newName;
    accountType = newAccountType;
    balance = newBalance;
    interest = newInterest;
    accountNum = assignNumber();
    return;
}
void bankAccount::printAccount() const
{
    using std::cout;
    using std::endl;
    cout << name << endl << accountType << endl << accountNum << endl << balance << endl << interest << endl;
    return;
}
void bankAccount::setName(string newName)
{
    name = newName;
    return;
}
void bankAccount::setAccountType(string newType)
{
    accountType = newType;
    return;
}
void bankAccount::updateBalance()
{
    using std::cout;
    using std::cin;
    double newBal;
    cout << "Enter added balance: ";
    cin >> newBal;
    balance += newBal;
    return;
}
void bankAccount::setInterest(double newInterest)
{
    interest = newInterest;
}
int bankAccount::assignNumber()
{
    nextAccount++;
    return (nextAccount-1);
}
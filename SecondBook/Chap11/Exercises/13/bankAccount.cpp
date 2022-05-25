#include "bankAccount.h"
#include <iomanip>
#include <iostream>


bankAccount::bankAccount(int accountIn, double balanceIn)
{
    accountNumber = accountIn;
    balance = balanceIn;
    return;
}
void bankAccount::setAccountNumber(int accountIn)
{
    accountNumber = accountIn;
    return;
}
void bankAccount::setBalance(double balanceIn)
{
    balance = balanceIn;
    return;
}
int bankAccount::getAccountNumber() const
{
    return accountNumber;
    return;
}
double bankAccount::getBalance() const
{
    return balance;
    return;
}
void bankAccount::print() const
{
    std::cout << "Account Number " << accountNumber << " has the balance of $";
    std::cout << std::fixed << std::setprecision(2) << std::showpoint;
    std::cout << balance << std::endl;
    return;
}
void bankAccount::depositWithdraw(double deposit)
{
    balance += deposit;
    std::cout << std::fixed << std::setprecision(2) << std::showpoint;
    std::cout << "$" << deposit << " deposited\n";
    return;
}
void bankAccount::withdraw(double withdraw)
{
    balance -= withdraw;
    std::cout << std::fixed << std::setprecision(2) << std::showpoint;
    std::cout << "$" << withdraw << " withdrawn\n";
    return;
}
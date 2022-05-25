/*Define the class bankAccount to store a bank customer’s account
number and balance. Suppose that account number is of type int, and
balance is of type double. Your class should, at least, provide the
following operations: set the account number, retrieve the account
number, retrieve the balance, deposit and withdraw money, and print
account information. Add appropriate constructors.*/

#ifndef BANKACCOUNT_h
#define BANKACCOUNT_H
class bankAccount
{
public:
    bankAccount(int = 0, double = 0.0);
    void setAccountNumber(int);
    void setBalance(double);
    int getAccountNumber() const;
    double getBalance() const;
    void print() const;
    void deposit(double);
    void withdraw(double withdraw);


private:
    int accountNumber;
    double balance;
};


#endif
#include <string>

class BankAccount
{
    double balance;
    public:
        BankAccount(double);
        BankAccount();
        void deposit(double n) { balance += n; }
        void withdraw(double n) { balance -= n;}
        double getBalance() { return balance; }
        void setBalance(double n) {balance = n;}

};
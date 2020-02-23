#include <iostream>
#include <string>
#include "bankaccount_class.h"

BankAccount::BankAccount(double n)
{
    balance = n;
}
BankAccount::BankAccount()
{
    balance = 100.00;
}

#include "stdafx.h"
#include "Account.h"
#include <iostream>

using namespace std;


Account::Account() {
    balance = .0;
}

Account::Account(double t) {
    if (t >= .0) {
        balance = t;
    } else {
        cout << "Not corect started balance, it set 0" << endl;
        balance = .0;
    }
}

void Account::setBalance(double b) {
    balance = b;
}

double Account::getBalance() {
    return balance;
}

void Account::credit(double sum) {
    balance += sum;
}

void Account::debit(double sum) {
    if (balance - sum >= .0) {
        balance -= sum;
    } else {
        cout << "Debit amount exceeds account balance." << endl;
    }
}

void  Account::display() {
    cout << "Balance: " << balance << "$" << endl;
}

SavingAccount::SavingAccount() {
    rate = 0.1;
}

SavingAccount::SavingAccount(double tt, double t) :Account(tt) {
    t <= 1.0 && t >= .0 ? rate = t : rate = .1;
}

double SavingAccount::canculateInterest() {
    return getBalance() * rate;
}

CheckingAccount::CheckingAccount() {
    trank = 0;
}

CheckingAccount::CheckingAccount(double tt, double t) :Account(tt) {
    t >= .0 ? trank = t : trank = 0;
}

void CheckingAccount::credit(double sum) {
    temp = getBalance();

    if (temp >= trank) {
        Account::credit(sum);
        setBalance(temp - trank);
    }
}

void CheckingAccount::debit(double sum) {
    temp = getBalance();
    Account::debit(sum);

    if (temp != getBalance() && getBalance() - trank >= .0) {
        setBalance(getBalance() - trank);
    }
}

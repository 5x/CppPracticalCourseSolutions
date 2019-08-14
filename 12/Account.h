#pragma once
class Account {
public:
    Account();
    Account(double);
    void credit(double);
    void debit(double);
    double getBalance();
    void setBalance(double);
    void display();
    ~Account() {
    }
private:
    double balance;
};

class SavingAccount :public Account {
public:
    SavingAccount();
    SavingAccount(double, double);
    double canculateInterest();
private:
    double rate;
};

class CheckingAccount :public Account {
public:
    CheckingAccount();
    CheckingAccount(double, double);
    void credit(double);
    void debit(double);
private:
    double temp, trank;
};

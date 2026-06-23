#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
public:
    double income = 0;
    double expense = 0;

    void addIncome();
    void calculateBalance();
};

#endif
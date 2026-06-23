#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
public:
    double income;
    double expense;

    void addIncome();
    void calculateBalance();
};

#endif
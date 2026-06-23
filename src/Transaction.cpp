#include "../include/Transaction.h"
#include <iostream>

using namespace std;

void Transaction::addIncome()
{
    cout << "Enter Income Amount: ";
    cin >> income;

    cout << "\nIncome Added Successfully!\n";
}

void Transaction::calculateBalance()
{
    cout << "\nCurrent Balance: " << income - expense << endl;
}
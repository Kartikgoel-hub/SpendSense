#include "../include/Search.h"
#include <iostream>

using namespace std;

void Search::searchByID(Expense expense)
{
    int id;

    cout << "Enter Expense ID: ";
    cin >> id;

    if(expense.expenseID == id)
    {
        cout << "\nExpense Found!\n";
        expense.displayExpense();
    }
    else
    {
        cout << "\nExpense Not Found!\n";
    }
}

void Search::searchByCategory(Expense expense)
{
    string category;

    cin.ignore();

    cout << "Enter Category: ";
    getline(cin, category);

    if(expense.category == category)
    {
        cout << "\nExpense Found!\n";
        expense.displayExpense();
    }
    else
    {
        cout << "\nExpense Not Found!\n";
    }
}

void Search::searchByDate(Expense expense)
{
    string date;

    cin.ignore();

    cout << "Enter Date: ";
    getline(cin, date);

    if(expense.date == date)
    {
        cout << "\nExpense Found!\n";
        expense.displayExpense();
    }
    else
    {
        cout << "\nExpense Not Found!\n";
    }
}

void Search::searchByAmount(Expense expense)
{
    double amount;

    cout << "Enter Amount: ";
    cin >> amount;

    if(expense.amount == amount)
    {
        cout << "\nExpense Found!\n";
        expense.displayExpense();
    }
    else
    {
        cout << "\nExpense Not Found!\n";
    }
}
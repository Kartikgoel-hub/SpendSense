#include "../include/User.h"
#include <iostream>
using namespace std;

void User::registerUser()
{
    cin.ignore();

    cout<<"Enter Username: ";
    getline(cin,username);

    cout<< "Enter Email: ";
    getline(cin,email);

    cout<< "Enter Password: ";
    getline(cin,password);

    cout<< "\nUser Registered Successfuly!\n";
}

void User::displayProfile()
{
    cout<< "\nUser Profile";
    cout<< "\n------------";
    cout<< "\nUsername: " << username;
    cout<< "\nEmail: " << email <<endl;
}
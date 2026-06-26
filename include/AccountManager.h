#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H
#include "User.h"
class AccountManager
{
public:
    bool login(User user);
    void changePassword(User &user);
};
#endif

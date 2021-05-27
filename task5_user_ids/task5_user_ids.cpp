#include "User.h"

#include <iostream>

int main()
{
    User* users[10];

    for (int i = 0; i < 10; i++)
    {
        const User* typ = new User();
        typ->print_user_data();
        delete typ;
    }
}

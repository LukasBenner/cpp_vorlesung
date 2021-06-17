#include "User.h"

#include <iostream>

int main()
{
    const User* users[10];

    for (int i = 0; i < 10; i++)
    {
        const User* typ = new User("Peter");
        typ->print_user_data();
        users[i] = typ;
    }
}

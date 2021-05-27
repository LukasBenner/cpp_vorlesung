#include "User.h"

int User::number_of_users = 0;

User::User(std::string name)
	:m_name(name)
	,m_id(number_of_users)
{
	number_of_users++;
}

User::~User()
{
	std::cout << "Deleted user " << m_id << std::endl;
}

void User::print_user_data() const
{
	std::cout << "Name: " << m_name << ", ID: " << m_id << std::endl;
}

#pragma once
#include <string>
#include <iostream>


class User
{
private:
	static int number_of_users;
	const std::string m_name;
	const int m_id;

public:
	User(std::string name = "Hans");
	~User();
	void print_user_data() const;
};


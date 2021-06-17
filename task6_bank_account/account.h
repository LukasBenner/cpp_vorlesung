#pragma once
#include <string>


class Account
{
	const int m_account_number;
	const std::string m_type;
	const int m_blz;
	int m_credit;
	int m_interest_rate;


public:
	Account(std::mt19937, int blz, int credit);
	virtual void deposit(int amount);
	void print_data();
};


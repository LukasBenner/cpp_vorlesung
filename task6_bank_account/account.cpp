#include "account.h"
#include <stdlib.h>
#include <time.h>
#include <random>



Account::Account(std::mt19937 generator, int blz, int credit)
	:m_account_number(generator())
	,m_blz(blz)
	,m_credit(credit)
{
	srand(time(NULL));
	m_interest_rate = 10 / rand() % 10;
}

void Account::deposit(int amount)
{
	m_credit += amount;
}

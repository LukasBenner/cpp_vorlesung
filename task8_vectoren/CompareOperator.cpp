#include "CompareOperator.h"

bool CompareOperator::operator()(const std::string& first, const std::string& second)
{
	int sum_first{ 0 };
	for (auto letter : first)
	{
		sum_first += letter;
	}
	int sum_second{ 0 };
	for (auto letter : second)
	{
		sum_second += letter;
	}
	return sum_first < sum_second;
}

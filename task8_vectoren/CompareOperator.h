#pragma once
#include <string>

class CompareOperator
{
public:
	bool operator()(const std::string& first, const std::string& second);
};

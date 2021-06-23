#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <cctype>
#include "CompareOperator.h"



template<class T> void print_container(T container) {
	std::cout << "Printing the container" << std::endl;
	for (const auto & element : container)
	{
		std::cout << element << std::endl;
	}
	std::cout << std::endl;
}


void vectoren()
{
	std::vector<std::string> vec = { "Eier", "Milch", "Zucker", "Schokolade", "Mehl" };
	print_container(vec);
	vec.erase(vec.begin());

	vec.push_back("Kaffee");
	
	print_container(vec);


	auto it = std::find_if(vec.begin(), vec.end(), [](const std::string& str) {return str == "Zucker"; });
	if (it != vec.end())
	{
		it->assign("Honig");
	}

	print_container(vec);

	it = std::find_if(vec.begin(), vec.end(), [](const std::string& str) {return str == "Milch"; });
	if (it != vec.end())
	{
		vec.erase(it);
	}
	print_container(vec);
}


void lists()
{
	std::list<std::string> lst;
	print_container(lst);

	lst = { "Eier", "Milch", "Zucker", "Schokolade", "Mehl" };
	print_container(lst);

	lst.erase(lst.begin());
	print_container(lst);

	lst.push_back("Kaffee");
	print_container(lst);

	auto it = std::find_if(lst.begin(), lst.end(), [](const std::string& str) {return str == "Zucker"; });
	if (it != lst.end())
	{
		*it = "Honig";
	}
	print_container(lst);

	it = std::find_if(lst.begin(), lst.end(), [](const std::string& str) {return str == "Milch"; });
	int index;
	if (it != lst.end())
	{
		index = std::distance(lst.begin(), it);
		lst.erase(it);
	}
	print_container(lst);

	it = lst.begin();
	std::advance(it, index);
	lst.insert(it, "Backpulver");
	print_container(lst);
}


bool operator<(const std::string& first, const std::string& second)
{
	std::vector<char> vokals = { 'A','E','I', 'O', 'U', 'a' ,'e', 'i','o', 'u' };
	int it_first = 0;
	int it_second = 0;
	for (it_first; it_first < first.size(); it_first++)
	{
		auto letter = first[it_first];
		auto it = std::find_if(vokals.begin(), vokals.end(), [letter](const char& chr) {return chr == letter; });
		if (it != vokals.end())
		{
			if (it != vokals.end())
			{
				break;
			}
		}
	}
	for (it_second; it_second < second.size(); it_second++)
	{
		auto letter = second[it_second];
		auto it = std::find_if(vokals.begin(), vokals.end(), [letter](const char& chr) {return chr == letter; });
		if (it != vokals.end())
		{
			if (it != vokals.end())
			{
				break;
			}
		}
	}
	return it_first < it_second;
}





void sorting_lists()
{
	std::list<std::string> lst = { "Eier", "Milch", "Zucker", "Schokolade", "Mehl" };
	std::cout << "Sort list: number of letters" << std::endl;
    lst.sort([](const std::string& first, const std::string& second) {return first.size() < second.size(); });
	print_container(lst);
	lst = {  "Milch", "Zucker", "Schokolade", "Mehl" ,"Eier"};
	std::cout << "Sort list: the first appearance of a vokal" << std::endl;
	lst.sort([](const std::string& first, const std::string& second) {return first < second; });
	print_container(lst);
	lst.sort(CompareOperator());
	print_container(lst);
}

int main()
{
	vectoren();
	lists();
	sorting_lists();



}



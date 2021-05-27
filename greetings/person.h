#pragma once
#include <stdlib.h>
#include <string>
#include "Languages.h"
#include <iostream>





class Person
{
	std::string m_name;
	Language m_language;

public:
	Person(std::string name, Language language);
	std::string get_name();
	void greet(Person *person);
};


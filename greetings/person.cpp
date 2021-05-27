#include "person.h"

Person::Person(std::string name, Language language):
	m_name(name),
	m_language(language)
{}

std::string Person::get_name()
{
	return m_name;
}

void Person::greet(Person *person)
{
	std::cout << greetings[m_language] << " " << person->get_name() << std::endl;
}

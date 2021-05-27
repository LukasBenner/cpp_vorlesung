#include "Place.h"
#include <iostream>
#include <sstream>
Place::Place(std::string name, int x_position, int y_position)
	:m_name(name)
	,m_x_position(x_position)
	,m_y_position(y_position)
{
}


const std::string Place::get_place_data()
{
	std::stringstream stream;
	stream << m_name << " (" << m_x_position << ", " << m_y_position << ")";
	return stream.str();
}

void Place::visit()
{
	std::cout << get_place_data() << std::endl;
}



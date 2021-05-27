#include "Restaurant.h"
#include <iostream>

Restaurant::Restaurant(std::string name, int x_position, int y_position, std::string food)
	:Place(name, x_position, y_position)
	,m_food(food)
{
}

void Restaurant::visit()
{
	std::cout << get_place_data() << " Hier gibt es "<< m_food <<  std::endl;
}

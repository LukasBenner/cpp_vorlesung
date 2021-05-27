#include "Sight.h"
#include <iostream>

Sight::Sight(std::string name, int x_position, int y_position, std::string view)
	:Place(name, x_position, y_position)
	,m_view(view)
{
}

void Sight::visit()
{
	std::cout <<get_place_data() << " Hier sieht man "<< m_view<<std::endl;
}

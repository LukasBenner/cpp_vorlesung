#pragma once
#include "Place.h"

namespace Places {
	class Restaurant : public Place
	{
	private:
		const std::string m_food;

	public:
		Restaurant(std::string name, int x_position, int y_position, std::string food);
		~Restaurant() override;
		void visit() override;
	};
}




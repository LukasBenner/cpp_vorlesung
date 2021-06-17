#pragma once
#include "Place.h"
#include <vector>

namespace Places {
	class Sight : public Place
	{
	private:
		const std::string m_view;

	public:
		Sight(const std::string name, int x_position, int y_position, std::string view);
		~Sight()override;
		void visit() override;
	};
}




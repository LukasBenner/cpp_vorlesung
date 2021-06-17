#pragma once
#include <string>

namespace Places
{
	class Place
	{
	private:
		const std::string m_name;
		const int m_x_position;
		const int m_y_position;


	public:
		Place(std::string name, int x_position, int y_position);
		virtual ~Place();
		virtual void visit();
		const std::string get_place_data();
	};
}





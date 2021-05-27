#include "Position.h"


Position::Position(int x, int y)
	:m_x(x)
	, m_y(y)
{
}

int Position::get_y_position() const
{
	return m_y;
}

int Position::get_x_position() const 
{
	return m_x;
}
#pragma once
class Position
{
private:
	const int m_x;
	const int m_y;

public:
	Position(int x, int y);
	int get_y_position() const;
	int get_x_position()const;
};


#include "Auto.h"

Auto::Auto(std::string name, const Position *position, float verbrauch)
	:m_position(position)
	,m_name(name)
	,m_verbrauch(verbrauch)
	,m_kilometer(0)
{}

void Auto::drive_to(const Ort *ort) {
	int distance_x = abs(ort->get_x_position() - m_position->get_x_position());
	int distance_y = abs(ort->get_y_position() - m_position->get_y_position());
	double distance = sqrt(pow(distance_x, 2) + pow(distance_y, 2));
	m_kilometer += static_cast<float>(distance);
	delete m_position;
	m_position = new Position(ort->get_x_position(), ort->get_y_position());
}

float Auto::get_kilometer() const
{
	return m_kilometer;
}

float Auto::get_used_fuel() const
{
	return m_kilometer * m_verbrauch / 100;
}

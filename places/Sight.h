#pragma once
#include "Place.h"
class Sight : public Place
{
private:
	const std::string m_view;

public:
	Sight(std::string name, int x_position, int y_position, std::string view);
	void visit() override;
};


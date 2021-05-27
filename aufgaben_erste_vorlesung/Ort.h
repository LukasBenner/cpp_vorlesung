#pragma once
#include <string>
#include "Position.h"

class Ort : public Position
{
	const std::string m_name;

public:
	Ort(std::string name, int x, int y);
};
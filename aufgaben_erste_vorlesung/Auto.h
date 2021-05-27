#pragma once
#include <string>
#include <stdlib.h>
#include <math.h>
#include "Ort.h"


class Auto
{
	const std::string m_name;
	const Position *m_position;
	const float m_verbrauch;
	float m_kilometer;

public:

	Auto(std::string name, const Position *position, float verbrauch);
	void drive_to(const Ort *ort);
	float get_kilometer() const;
	float get_used_fuel() const;
};


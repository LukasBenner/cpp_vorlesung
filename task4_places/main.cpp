#include "Restaurant.h"
#include "Sight.h"
#include <vector>
#include "iostream"
#include <memory>

int main()
{
	std::vector<std::unique_ptr<Places::Place>> places;
	auto pointer = std::make_shared<Places::Place>("Stuttgart", 50, 100);
	places.push_back(std::make_unique<Places::Sight>("Fernsehturm Berlin", 100, 100, "den Alexanderplatz"));
	places.push_back(std::make_unique<Places::Place>("Stuttagrt", 0, 50));
	places.push_back(std::make_unique<Places::Restaurant>("La Casa", 20, 20, "Pizza und Pesto"));
	
	auto pointer2 = pointer;


	for (int i = 0; i < places.size(); i++)
	{
		places[i]->visit();
	}

	
}
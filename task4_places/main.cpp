#include "Restaurant.h"
#include "Sight.h"
#include <vector>

#include "iostream"

int main()
{
	std::vector<Place*> places;

	places.push_back(new Sight("Fernsehturm Berlin", 100, 100, "den Alexanderplatz"));
	places.push_back(new Place("Stuttagrt", 0, 50));
	places.push_back(new Restaurant("La Casa", 20, 20, "Pizza und Pesto"));

	for (int i = 0; i < places.size(); i++)
	{
		places[i]->visit();
	}
}
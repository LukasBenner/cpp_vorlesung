
#include <iostream>
#include "Auto.h"
#include "Ort.h"

int main()
{
    const Ort* garage = new Ort("Garage", 100, 100);
    const Ort* arbeit = new Ort("Oberndorf", 110, 110);

    Auto* benz = new Auto("Mein Benz", garage, 6.5);

    benz->drive_to(arbeit);
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << benz->get_kilometer() << " Kilometer" << std::endl;
    std::cout << benz->get_used_fuel() << " Liter" << std::endl;
};
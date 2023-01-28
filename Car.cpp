#include "Car.h"
Car::Car() : _speedCAR(0), _country_roadCAR(7), _asphalt_roadCAR(10) {}

void Car::NameTypeVehicle()
{
	std::cout << "Moto Yamaha" << std::endl;
}

void Car::Speed_on_Track(const std::string& road_race)
{
	if (_road_type == road_race) {
		 _speedCAR += _country_roadCAR;
	}
	else
		 _speedCAR += _asphalt_roadCAR;
}

int Car::returnWinner()
{
	return _speedCAR;
}

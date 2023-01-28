#include "Motocycle.h"
Motocycle::Motocycle() : _speedMOTO(0), _country_roadMOTO(10), _asphalt_roadMOTO(7) {}

void Motocycle::NameTypeVehicle()
{
	std::cout << "Car Porshe " << std::endl;
}


void Motocycle::Speed_on_Track(const std::string& road_race)
{ 
	if(_road_type == road_race){
		 _speedMOTO += _country_roadMOTO;
	}
	else
		 _speedMOTO += _asphalt_roadMOTO;
}

int Motocycle::returnWinner()
{
	return _speedMOTO;
}

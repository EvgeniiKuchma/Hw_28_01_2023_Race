#pragma once
#include <iostream>
#include <cstring>
class Car
{
public:
	Car();
	void NameTypeVehicle();
	void Speed_on_Track(const std::string& road_race);
	int returnWinner();
private:
	const std::string _road_type = { "country_road" };
	int _speedCAR;
	int _country_roadCAR;
	int _asphalt_roadCAR;


	
};



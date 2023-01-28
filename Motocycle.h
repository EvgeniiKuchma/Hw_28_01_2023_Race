#pragma once
#include <iostream>
#include <cstring>

class Motocycle
{
public:
	Motocycle();
	void NameTypeVehicle();
	void Speed_on_Track(const std::string& road_race);
	int returnWinner();
private:
	const std::string _road_type = { "country_road" };
	int _speedMOTO;
	int _country_roadMOTO;
	int _asphalt_roadMOTO ;
};


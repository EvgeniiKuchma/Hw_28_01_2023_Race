#include <iostream>
#include "Motocycle.h"
#include "Car.h"
#include <windows.h>
void Race(Car& car, Motocycle& moto, const std::string& road_race) {
	
	std::cout << "Great, it will be " << road_race << ". Let's go!!!" << std::endl;
	std::cout << "Participate in the race: " << std::endl;
	Sleep(1000);
	car.NameTypeVehicle();
	Sleep(1000);
	moto.NameTypeVehicle();
	Sleep(1000);
	std::cout << "Ready"; Sleep(1000); std::cout << "\tSteady"; Sleep(1000); std::cout << "\tGO!!!" << std::endl;
	for (int i = 0; i < 5; i++) {
		Sleep(500);
		std::cout << "========";
	}
	for (int i = 0; i < road_race.size(); i++) {
		char arr[] = { road_race[i] };
		const std::string a = std::string(arr);
		car.Speed_on_Track(a);
		moto.Speed_on_Track(a);
	}
	if (car.returnWinner() <  moto.returnWinner()) {
		std::cout << " AnD WiNNeR ===>>>> Car";
	}
	else
		std::cout << " AnD WiNNeR ===>>>> Moto";
};
int main()
{	setlocale(LC_ALL, "Russian");
	Car car;
	Motocycle moto;
	const std::string country_road = {"country_road"};
	const std::string asphalt_road = {"asphalt_road"};
	int a = 0;
	
do{
	std::cout << "1.country_road" << std::endl;
	std::cout << "2.asphalt_road" << std::endl;
	std::cout << "Enter number road race: -> ";
	std::cin >> a;
	if (a <= 0 || a  >= 3) {
		std::cout << "Track is not found, try again" << std::endl;
	Sleep(1000);
	system("cls");
	}
	else
		switch (a) 
		{
		case 1:
			system("cls");
			Race(car, moto, country_road);
			break;
		case 2:
			system("cls");
			Race(car, moto, asphalt_road);
			break;
		}
		} while (a <= 0 || a >= 3);
	return 0;
}
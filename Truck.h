#pragma once
#include "Vehicle.h"
#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Vehicle
{
private:
	float towCapacity; // truck's tow capacity in kilograms

public:

	//constructors
	Truck(); // default constructor
	Truck(float TC, int Y, string M);

	//setter
	void setTowCapacity(float TC);

	//getter
	float getTowCapacity();

	//other member function
	void displayInfo();

};
#endif

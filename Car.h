#pragma once
#include "Vehicle.h"
#ifndef CAR_H
#define CAR_H


class Car : public Vehicle
{
private:
	int doors;

public:

	//constructors
	Car(); // default constructor
	Car(int D, int Y, string M);

	//setter
	void setDoors(int D);

	//getter
	int getDoors();

	//other member function
	void displayInfo();

};
#endif

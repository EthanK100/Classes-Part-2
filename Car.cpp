#include "Car.h"
#include<iostream>
void Car::setDoors(int D) // sets the number of doors on the vehicle
{
	doors = D;
}

int Car::getDoors() // reutnrs the variable stored in doors
{
	return doors;
}

Car::Car(int D, int Y, string M) // upon creation of a car object, sets values for the member variables
{
	setDoors(D);
	setYear(Y);
	setManufacturer(M);
}

Car::Car() // upon creation of a car object without parameters, sets default values for the member variables
{
	setDoors(0);
	setYear(0);
	setManufacturer("unknown");
}

void Car::displayInfo() // displays the info about the car
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << doors << endl;
}
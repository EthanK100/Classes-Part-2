#include "Truck.h"

void Truck::setTowCapacity(float TC) // sets the value for the truck's tow capacity
{
	towCapacity = TC;
}

float Truck::getTowCapacity() // returns the value stored in towCapacity
{
	return towCapacity;
}

Truck::Truck(float TC, int Y, string M) // upon creation of a truck object, sets values for the member variables
{
	setTowCapacity(TC);
	setYear(Y);
	setManufacturer(M);
}

Truck::Truck() // upon creation of a truck object without parameters, sets default values for the member variables
{
	setTowCapacity(0);
	setYear(0);
	setManufacturer("unknown");
}

void Truck::displayInfo() // displays the information about the truck
{
	Vehicle::displayInfo();
	cout << "Tow Capactiy: " << towCapacity << " kilograms" << endl;
}
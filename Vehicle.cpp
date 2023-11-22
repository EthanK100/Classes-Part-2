#include "Vehicle.h"

void Vehicle::setYear(int Y) // sets the vehicle year
{
	year = Y;
}

void Vehicle::setManufacturer(string M) // sets the vehicle manufacturer
{
	manufacturer = M;
}

int Vehicle::getYear() // returns the value stored in year
{
	return year;
}

string Vehicle::getManufacturer() // returns the value stored in manufacturer
{
	return manufacturer;
}

Vehicle::Vehicle(int Y, string M) // constructor that sets up the member variables for the vehicle class
{
	Vehicle::setYear(Y);
	Vehicle::setManufacturer(M);
}

Vehicle::Vehicle() // defualt constructor to populate member variables with default values
{
	setYear(0);
	setManufacturer("unknown");
}

void Vehicle::displayInfo() // displays the info about the vehicle
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}
// Ethan Klenda
// CIS 1202 501
// November 22, 2023

//include classes
#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"

#include<iostream>
#include<string>

using namespace std;

int main()
{
	// variables to hold information on a vehicle
	Vehicle vehicleObj;
	int vehicleYear;
	string vehicleManufacturer;
	int doors;
	float towCapacity;
	
	// gets information form the user to store into the vehicle object
	cout << "Please enter information for a vehicle below." << endl;
	cout << "Enter the vehicle manufacturer: ";
	cin.ignore(1);
	getline(cin, vehicleManufacturer);
	vehicleObj.setManufacturer(vehicleManufacturer);
	cout << "Enter the year the vehicle was built: ";
	cin >> vehicleYear;
	vehicleObj.setYear(vehicleYear);

	//displays the information of the vehicle
	cout << "Here is the information on the vehicle: " << endl;
	vehicleObj.displayInfo();
	cout << endl;
	

	return 0;
}
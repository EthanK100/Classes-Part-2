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
	getline(cin, vehicleManufacturer);
	vehicleObj.setManufacturer(vehicleManufacturer);
	
	cout << "Enter the year the vehicle was built: ";
	cin >> vehicleYear;
	vehicleObj.setYear(vehicleYear);

	//displays the information of the vehicle
	cout << endl << "Here is the information on the vehicle:" << endl;
	vehicleObj.displayInfo();
	cout << endl;

	// gets information from the user to store into a car object
	Car carObj;
	
	cout << "Please enter information for a car below." << endl;
	cout << "Enter the car manufacturer: ";
	cin.ignore(1);
	getline(cin, vehicleManufacturer);
	carObj.setManufacturer(vehicleManufacturer);
	
	cout << "Enter the year the car was built: ";
	cin >> vehicleYear;
	carObj.setYear(vehicleYear);
	
	cout << "Enter the amount of doors on the car: ";
	cin >> doors;
	carObj.setDoors(doors);

	//displays the information of the car
	cout << endl << "Here is the information on the car:" << endl;
	carObj.displayInfo();
	cout << endl;



	return 0;
}
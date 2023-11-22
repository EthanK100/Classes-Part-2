#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
#include<iostream>

using namespace std;

class Vehicle
{
private:
	
	int year;
	string manufacturer;
	
public:

	//constructors
	Vehicle(); // default constructor
	Vehicle(int Y, string M);
	
	//setters
	void setYear(int Y);
	void setManufacturer(string M);

	//getters
	int getYear();
	string getManufacturer();

	//other member function
	void displayInfo();

};
#endif

#include<string>
#include<iostream>
#include"Vehicle.h"

using namespace std;

Vehicle::Vehicle()
{
	manufacturer = "Null";
	year = 0000;
}

void Vehicle::storeInfo(string manuName, int yearMade)
{
	manufacturer = manuName;
	year = yearMade;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

int Vehicle::getYear()
{
	return year;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}
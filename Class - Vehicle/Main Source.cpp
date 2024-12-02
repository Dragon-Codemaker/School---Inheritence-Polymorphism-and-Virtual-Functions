//Name: Alexandra Smith
//Class: CIS 1202.501
//Project Name: Inheritence, Polymorphism, and Virtual Functions
//Project Description: This program is a driver for testing the Vehicle base class and it's derived classes Car and Truck
//Date: 11/29/2024

#include<string>
#include<iostream>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"

using namespace std;

int main()
{
	Vehicle userVehicle;
	Car userCar;
	Truck userTruck;

	string manu;
	int yearMade;
	int numDoors;
	int towingCapacity;

	cout << "Please enter manufacturer: ";
	getline(cin, manu);
	cout << "Please enter the year of make: ";
	cin >> yearMade;

	userVehicle.storeInfo(manu, yearMade);
	userVehicle.displayInfo();


	cout << "Please enter manufacturer: ";
	cin.ignore();
	getline(cin, manu);
	cout << "Please enter the year of make: ";
	cin >> yearMade;
	cout << "Please enter the number of doors: ";
	cin >> numDoors;

	userCar.storeInfo(manu, yearMade);
	userCar.storeDoors(numDoors);
	userCar.displayInfo();
	userCar.displayDoors();

	cout << "Please enter manufacturer: ";
	cin.ignore();
	getline(cin, manu);
	cout << "Please enter the year of make: ";
	cin >> yearMade;
	cout << "Please enter the towing capacity: ";
	cin >> towingCapacity;

	userTruck.storeInfo(manu, yearMade);
	userTruck.storeTowCap(towingCapacity);
	userTruck.displayInfo();
	userTruck.displayTowCap();



	system("pause");
	return 0;
}
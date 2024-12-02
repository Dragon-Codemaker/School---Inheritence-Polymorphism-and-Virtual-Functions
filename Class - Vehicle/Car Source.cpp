#include<string>
#include<iostream>
#include"Vehicle.h"
#include"Car.h"

using namespace std;

Car::Car()
{
	doors = 0;
}

int Car::getDoors()
{
	return doors;
}

void Car::storeDoors(int numDoors)
{
	doors = numDoors;
}

void Car::displayDoors()
{
	cout << "Number of doors: " << doors << endl;
}
#include<string>
#include<iostream>
#include"Vehicle.h"
#include"Truck.h"

using namespace std;

Truck::Truck()
{
	towCap = 0;
}

double Truck::getTowCap()
{
	return towCap;
}

void Truck::storeTowCap(double towingLbs)
{
	towCap = towingLbs;
}

void Truck::displayTowCap()
{
	cout << "Towing Capacity: " << towCap << endl;
}
#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
#include<iostream>

using namespace std;

class Vehicle
{
	private:
		string manufacturer;
		int year;

	public:
		Vehicle();
		string getManufacturer();
		int getYear();
		void storeInfo(string manuName, int yearMade);
		void displayInfo();

};


#endif


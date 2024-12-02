#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include<string>
#include<iostream>
#include"Vehicle.h"

using namespace std;


class Truck : public Vehicle
{
	private:
		double towCap;

	public:
		Truck();

		double getTowCap();
		void storeTowCap(double towingLbs);
		void displayTowCap();

};

#endif

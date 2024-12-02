#pragma once
#ifndef CAR_H
#define CAR_H

#include<string>
#include<iostream>
#include"Vehicle.h"

using namespace std;

class Car : public Vehicle
{
	private:
		int doors;

	public:
		Car();
		
		int getDoors();
		void storeDoors(int numDoors);
		void displayDoors();

};

#endif

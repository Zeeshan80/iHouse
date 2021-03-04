#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H
#pragma once
#include "Sensors.hpp"
#include "iostream"

class TemperaturSensor  
{
	private:

	public:
		TemperaturSensor();
		~TemperaturSensor();
		int Temp;
		bool Temp1;
		void setTemp();
		int getTemp();
		bool checkTemp();
};
#endif
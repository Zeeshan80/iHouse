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
		void setTemp();
		int getTemp();
		bool checkTemp();
};
#endif
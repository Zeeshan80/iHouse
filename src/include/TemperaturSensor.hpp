#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H
#pragma once
#include "Sensors.hpp"
#include "iostream"

class TemperaturSensor  : public Sensors {
	private:
		// Varaibles
		int TempValue;
		bool TempPower;
	public:
		// Constructur & Destructur
		TemperaturSensor();
		~TemperaturSensor();
		// Functions
		void setTemp();
		int getTemp();
		bool checkTemp();
};
#endif
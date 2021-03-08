#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H
#pragma once

#include "Sensors.hpp"
#include "iostream"

class TemperaturSensor  : public Sensors {
	protected:
		// Varaibles
		int TempValue;
		bool TempPower = 0;
	public:
		// Constructur & Destructur
		TemperaturSensor();
		~TemperaturSensor();
		// Functions
		void setTemp(int value);
		int getTemp();
		bool checkTemp();
		void printTempSensor();
};
#endif
#ifndef LIGHTSENSORTEST_H
#define LIGHTSENSORTEST_H
#pragma once
#include <thread>
#include <iostream>
//#include "bathtub.hpp"

	
class lightSensorTest  
{
	private:
	bool sensorOn = false;
	unsigned int temperature = 15;
	unsigned int setPoint = 20;

	public:

		void sensorThread();
		void enableSensorThread();
		void disableSensorThread();
		void set_Temp(unsigned int newTemp);
		int get_Temp();


		lightSensorTest();
		~lightSensorTest();

};
#endif
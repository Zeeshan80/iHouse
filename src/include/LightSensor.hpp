#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H
#pragma once
#include "Sensors.hpp"
#include "iostream"

class LightSensor  : Sensors
{
	private:

	public:
		LightSensor();
		~LightSensor();
		void setLight();
		int getLight();
		bool checkLight();
};
#endif
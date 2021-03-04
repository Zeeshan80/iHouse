#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H
#pragma once
#include "Sensors.hpp"
#include "iostream"

class LightSensor : public Sensors {
	private:
		// Variables
		int* LightValue;
		bool LightPower;
	public:
		//  Constructur & Destructur
		LightSensor();
		~LightSensor();
		// Funcions
		void setLight(int *value);
		int getLight();
		bool checkLight();
};
#endif
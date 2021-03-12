#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H
#pragma once

#include "Sensors.hpp"
#include "iostream"
#include <cstddef>


class LightSensor : public Sensors {
	protected:
		// Variables
		int LightValue;
		bool LightPower = 0;
	public:
		//  Constructur & Destructur
		LightSensor();
		~LightSensor();
		int& operator*();
		// Funcions
		bool checkLight();
		void setLight(int value);
		int getLight();
		void printLightSensor();
};
#endif
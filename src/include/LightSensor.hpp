#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H
#include <cstddef>
#pragma once
#include "Sensors.hpp"
#include "iostream"


class LightSensor : public virtual Sensors {
	
	private:
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
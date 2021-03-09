#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H
#pragma once

#include "iostream"
#include <cstddef>
#include <thread>
#include "bathroom.hpp"
#include "bedroom.hpp"
#include "Kitchen.hpp"
#include "LivingRoom.hpp"
#include <typeinfo>
#include <sstream>


class LightSensor  {
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
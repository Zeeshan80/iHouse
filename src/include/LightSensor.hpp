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
#include "MotionSensor.hpp"
#include <typeinfo>
#include <sstream>


class LightSensor  {
	protected:
		// Variables
		int LightValue;
		bool LightSensoronOff;
		room* roomObject;
		MotionSensor* motionSensorObject;


	public:
		//  Constructur & Destructur
		LightSensor(int brightness,  room* room,MotionSensor* motionSens, bool state=false);
		LightSensor();
		~LightSensor();

		// Returns state of the light sensor if it is on or of
		bool lightStatus();

		// set and get for your desired brightness.
		void setLightValue(int value);
		int getLightValue();

		/*void printLightSensor();*/

		//sensor methods
		void sensorThread();
		void enableSensorThread();
		void disableSensorThread();
};
#endif
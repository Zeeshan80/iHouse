#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#include "Sensors.hpp"
#include "LightSensor.hpp"
#pragma once
	
class MotionSensor : public LightSensor {
	private:
		// Variables
		int MotionValue;
		bool MotionPower = 0;
	public:
		// Constructur & Destructur
		MotionSensor();
		~MotionSensor();
		// Funcions
		void setMotion(int value);
		int getMotion();
		bool checkMotion();
		void printMotionSensor();
};
#endif
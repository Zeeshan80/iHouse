#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#pragma once

#include "Sensors.hpp"
#include "iostream"

class MotionSensor : public Sensors {
	protected:
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
#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#include "Sensors.hpp"
#pragma once
	
class MotionSensor : public Sensors {
	private:
		// Variables
		int MotionValue;
		bool MotionPower;
	public:
		// Constructur & Destructur
		MotionSensor();
		~MotionSensor();
		// Funcions
		void setMotion();
		int getMotion();
		bool checkMotion();
};
#endif
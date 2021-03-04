#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#include "Sensors.hpp"
#pragma once
	
class MotionSensor  : Sensors
{
	private:

	public:
		int Motion;
		bool Motion1;
		MotionSensor();
		~MotionSensor();
		void setMotion();
		int getMotion();
		bool checkMotion();
};
#endif
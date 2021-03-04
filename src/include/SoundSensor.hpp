#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H
#pragma once

#include "Sensors.hpp"
	
class SoundSensor : public Sensors
{
	private:
		// int value;
	public:
		SoundSensor();
		~SoundSensor();
		void setSound();
		int getSound();
		bool checkSound();
};
#endif
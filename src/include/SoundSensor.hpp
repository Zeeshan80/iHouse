#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H
#pragma once

#include "Sensors.hpp"
	
class SoundSensor : public Sensors {
	private:
		// Variables;
		int SoundValue;
		bool SoundPower;
	public:
		// Constructur & Destructur
		SoundSensor();
		~SoundSensor();
		// Functions
		void setSound();
		int getSound();
		bool checkSound();
};
#endif
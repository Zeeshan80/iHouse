#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H
#pragma once

#include "Sensors.hpp"
#include "iostream"
	
class SoundSensor : public Sensors {
	protected:
		// Variables;
		int SoundValue;
		bool SoundPower = 0;
	public:
		// Constructur & Destructur
		SoundSensor();
		~SoundSensor();
		// Functions
		void setSound(int value);
		int getSound();
		bool checkSound();
		void printSoundSensor();
};
#endif
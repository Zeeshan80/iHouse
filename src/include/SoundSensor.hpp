#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H
#pragma once

#include "Sensors.hpp"
	
class SoundSensor : public Sensors
{
	private:
		int value;
	public:
		SoundSensor();
		~SoundSensor();
		void Init();
		void Write();
		void Read();	
		void setValue(int v);
		int getValue();
};
#endif
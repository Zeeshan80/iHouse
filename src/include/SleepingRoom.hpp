#ifndef SLEEPINGROOM_H
#define SLEEPINGROOM_H
#pragma once

#include "LightSensor.hpp"
#include "MotionSensor.hpp"
#include "SoundSensor.hpp"
#include "TemperaturSensor.hpp"
	
class SleepingRoom : public LightSensor, public MotionSensor, public SoundSensor, public TemperaturSensor {
	protected:
		int SleepingRoomSelection; 
	public:
		SleepingRoom();
		~SleepingRoom();
		void setSleepingRoom(int selection);
		int getSleepingRoom();
		void printSleepingRoom();

};
#endif
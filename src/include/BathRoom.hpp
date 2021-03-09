#ifndef BATHROOM_H
#define BATHROOM_H
#pragma once

#include "LightSensor.hpp"
#include "MotionSensor.hpp"
#include "SoundSensor.hpp"
#include "TemperaturSensor.hpp"
	
class BathRoom : public LightSensor, public MotionSensor, public SoundSensor, public TemperaturSensor {
	protected:
		int BathRoomSelection; 
	public:
		BathRoom();
		~BathRoom();
		void setBathRoom(int selection);
		int getBathRoom();
		void printBathRoom();

};
#endif
#ifndef LIVINGROOM_H
#define LIVINGROOM_H
#pragma once

#include "LightSensor.hpp"
#include "MotionSensor.hpp"
#include "SoundSensor.hpp"
#include "TemperaturSensor.hpp"

class LivingRoom : public LightSensor, public MotionSensor, public SoundSensor, public TemperaturSensor {
	protected:
		int LivingRoomSelection;
	public:
		LivingRoom();
		~LivingRoom();
		void setLivingRoom(int selection);	
		int getLivingRoom();
		void printLivinRoom();
};
#endif
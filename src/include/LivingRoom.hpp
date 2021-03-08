#ifndef LIVINGROOM_H
#define LIVINGROOM_H
#pragma once

#include <algorithm>
#include "LightSensor.hpp"
#include "MotionSensor.hpp"
#include "SoundSensor.hpp"
#include "TemperaturSensor.hpp"

class LivingRoom : public LightSensor, public MotionSensor, public SoundSensor, public TemperaturSensor {
	private:
	public:
		LivingRoom();
		~LivingRoom();
		

};
#endif
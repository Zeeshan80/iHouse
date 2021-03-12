#ifndef KITCHEN_H
#define KITCHEN_H
#pragma once

#include "LightSensor.hpp"
#include "MotionSensor.hpp"
#include "SoundSensor.hpp"
#include "TemperaturSensor.hpp"	

class Kitchen : public LightSensor, public MotionSensor, public SoundSensor, public TemperaturSensor {
	protected:
		int KitchenSelection; 
	public:
		Kitchen();
		~Kitchen();
		void setKitchen(int selection);
		int getKitchen();
		void printKitchen();

};
#endif
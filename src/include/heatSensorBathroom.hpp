#ifndef HEATSENSORBATHROOM_H
#define HEATSENSORBATHROOM_H
#pragma once
#include <thread>
#include <iostream>
#include "bathroom.hpp"
#include <typeinfo>

	
class heatSensorBathroom  
{
	private:
	bool sensorOn = false;
	unsigned int setPoint = 0;
	bathroom* roomTemperature;

	public:
		heatSensorBathroom(unsigned int targetTemp, bathroom* bathroom);
		void set_newRoom(bathroom* bathroom); //to be used if you for some reason need to change the room the sensor is in
		void sensorThread();
		void enableSensorThread();
		void disableSensorThread();
		void set_setPointTemp(unsigned int newTemp);
		int get_Temp();


		heatSensorBathroom ();
		~heatSensorBathroom ();

};
#endif
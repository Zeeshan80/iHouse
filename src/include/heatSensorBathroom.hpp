#ifndef HEATSENSORBATHROOM_H
#define HEATSENSORBATHROOM_H
#pragma once
#include <thread>
#include <iostream>
#include "bathroom.hpp"
#include <typeinfo>
#include <sstream>


	
class heatSensorBathroom  
{
	private:
	bool sensorOn;
	unsigned int targetTemperature;
	bathroom* roomTemperature; //change roomtemperature to generic "room"

	public:
		heatSensorBathroom(unsigned int targetTemp, bathroom* bathroom,bool state=false);
		void set_newRoom(bathroom* bathroom); //to be used if you for some reason need to change the room the sensor is in
		void sensorThread();
		void enableSensorThread();
		void disableSensorThread();
		void set_targetTemperature(unsigned int newTemp);
		int get_Temp();


		heatSensorBathroom ();
		~heatSensorBathroom ();

};
#endif
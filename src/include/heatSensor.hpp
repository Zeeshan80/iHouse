#ifndef HEATSENSOR_H
#define HEATSENSOR_H
#pragma once
#include <thread>
#include <iostream>
#include "bathroom.hpp"
#include <typeinfo>
#include <sstream>


	
class heatSensor 
{
	private:
	bool sensorOn;
	unsigned int targetTemperature;
	room* roomObject; //change roomtemperature to generic "room"

	public:
		heatSensor(unsigned int targetTemp, room* room,bool state=false);
		void set_newRoom(room* room); //to be used if you for some reason need to change the room the sensor is in
		void sensorThread();
		void enableSensorThread();
		void disableSensorThread();
		void set_targetTemperature(unsigned int newTemp);
		int get_Temp();


		heatSensor ();
		~heatSensor ();

};
#endif
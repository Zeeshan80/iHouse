#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H
#pragma once
#include <thread>
#include <iostream>
#include "bathroom.hpp"
#include <typeinfo>
#include <sstream>

class humiditySensor  
{
	private:
		bool sensorOn;
		unsigned int targetHumidity;
		room* roomObject; //change roomtemperature to generic "room"
	public:

		humiditySensor(unsigned int humidity, room* room,bool state=false);
		void set_newRoom(room* room); //to be used if you for some reason need to change the room the sensor is in
		void sensorThread();
		void enableSensorThread();
		void disableSensorThread();
		void set_targetHumidty(unsigned int humidity);
		int get_humidity();

		humiditySensor();
		~humiditySensor();

};
#endif
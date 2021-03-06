#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H
#pragma once
#include <thread>
#include <iostream>
#include "bathroom.hpp"
#include <typeinfo>
	
class humiditySensor  
{
	private:
		bool sensorOn;
		unsigned int targetHumidity;
		bathroom* roomObject; //change roomtemperature to generic "room"
	public:

		humiditySensor(unsigned int humidity, bathroom* room,bool state=false);
		void set_newRoom(bathroom* room); //to be used if you for some reason need to change the room the sensor is in
		void sensorThread();
		void enableSensorThread();
		void disableSensorThread();
		void set_targetHumidty(unsigned int humidity);
		int get_humidity();

		humiditySensor();
		~humiditySensor();

};
#endif
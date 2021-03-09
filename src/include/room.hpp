#ifndef ROOM_H
#define ROOM_H
#pragma once
#include <string>
#include "iostream"
	
class room  
{	private:
		//incase priv variable.
	protected:
		double temperature;
		double humidity;
		int light;
		bool personInRoom;
	public:
		//Set and get function for temperature
		void set_temp(unsigned int temp);
		int get_temp();
		//Set and get function for humidity
		void set_humidity(unsigned int humidityInAir);
		int get_humidity();
		//Set and get function for the lights
		void set_lightLevel(int state);
		int get_lightLevel();
		//Set and get function for seeing if someone is in the bathroom
		void set_personInRoom(bool state);
		bool get_personInRoom();

		virtual std::string name();
		
		room();
		~room();

};
#endif
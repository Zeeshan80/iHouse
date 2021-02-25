#ifndef BEDROOM_H
#define BEDROOM_H
#pragma once
#include <string>

class bedroom  
{
	private:
	double temperature;
	double humidity;
	bool light;
	wakeUpLight* wakeUpLight();

	public:
		//Set and get function for temperature
		void set_temp(unsigned int temp);
		int get_temp();
		//Set and get function for humidity
		void set_humidity(unsigned int humidityInAir);
		int get_humidity();
		//Set and get function for the lights
		void set_lightLevel(bool state);
		bool get_lightLevel();	
		//Set and get function for the wakeUpLight
		void set_wakeUpLight(unsigned int hour, unsigned int minute,unsigned int soundnumber,unsigned int brightness);
		void get_wakeUplightInfo();	


		bedroom();
		~bedroom();

};
#endif
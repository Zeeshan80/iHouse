#ifndef BATHROOM_H
#define BATHROOM_H
#pragma once
#include "bathtub.hpp"
#include <string>

class bathroom  
{
	private:
	double temperature;//done
	double humidity;//done
	bool waterLeak;
	bool light;
	bool personInBathroom;
	std::string music;
	bathtub* bathtubBathroom;
	//do

	public:
		//Set and get function for temperature
		void set_temp(unsigned int temp);
		int get_temp();
		//Set and get function for humidity
		void set_humidity(unsigned int humidityInAir);
		int get_humidity();
		//Set and get function for the water sensor behind the sink
		void set_waterLeak(bool state);
		bool get_waterLeak();
		//Set and get function for the lights
		void set_lightstate(bool state);
		bool get_lightstate();	
		//Set and get function for seeing if someone is in the bathroom
		void set_personInBathroom(bool state);
		bool get_personInBathroom();
		//Set and get function for controlling the music
		void set_music(std::string song);
		std::string get_music();
		//Set and get function for controlling the bathtub
		void set_bathtub(unsigned int waterTemperature , unsigned int waterHeight, bool bubblestate);
		bathtub* get_bathtub();
		void get_bathtubinfo();
		bathroom(double temperature1,double humidity1,bool waterleak1=false,bool light1=false,bool personInBathroom1=false,std::string music1="none");

		bathroom();
		~bathroom();

};
#endif
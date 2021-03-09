#ifndef BATHROOM_H
#define BATHROOM_H
#pragma once
#include "bathtub.hpp"
#include <string>
#include "room.hpp"

class bathroom  : public room
{
	private:
	bool waterLeak;
	std::string music;
	bathtub* bathtubBathroom;

	public:
		//Set and get function for the water sensor behind the sink
		void set_waterLeak(bool state);
		bool get_waterLeak();

		//Set and get function for controlling the music
		void set_music(std::string song);
		std::string get_music();

		//Set and get function for controlling the bathtub
		void set_bathtub(unsigned int waterTemperature , unsigned int waterHeight, bool bubblestate);
		bathtub* get_bathtub();
		void get_bathtubinfo();

		//Get roomtype.
		std::string name();

		//Constructor and destructors
		bathroom(double temperature1,double humidity1,bool waterleak1=false,int light1=0,bool personInBathroom1=false,std::string music1="none");

		bathroom();
		~bathroom();

};
#endif
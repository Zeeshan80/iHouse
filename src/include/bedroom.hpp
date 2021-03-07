#ifndef BEDROOM_H
#define BEDROOM_H
#pragma once
#include <string>
#include "wakeUpLight.hpp"
#include "room.hpp"

class bedroom  : public room
{
	private:
	wakeUpLight* wakeUpLightBedroom;

	public:	
		//Set and get function for the wakeUpLight
		void set_wakeUpLight(unsigned int hour, unsigned int minute,std::string soundnumber,unsigned int brightness, bool state);
		void set_wakeUpLightState(bool state);
		void get_wakeUplightInfo();

		//Get room type.
		std::string name();

		//Constructors and destructors for bedroom
		bedroom(double temperature1,double humidity1,bool light1=false,bool personInBedroom=false);
		bedroom();
		~bedroom();

};
#endif
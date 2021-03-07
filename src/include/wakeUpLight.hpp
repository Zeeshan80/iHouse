#ifndef WAKEUPLIGHT_H
#define WAKEUPLIGHT_H
#pragma once
#include <string>
	
class wakeUpLight  
{
	private:
	unsigned int alarmTimeHour;
	unsigned int alarmTimeMinute;
	std::string sound;
	unsigned int lightLevel;
	bool onOff;

	public:
		//Set and get function for setting and getting the time the alarm goes of
		void set_alarmTime(unsigned int hour, unsigned int minute);
		void get_alarmTime();
		//Set and get function for the sound the alarm produces. see wakeUpLight.cpp for the different choices
		void set_musicType(unsigned int soundnumber);
		std::string get_musicType();
		//Set and get function for the lights
		void set_lighLevel(unsigned int brightness);
		bool get_lighLevel();
		//Set and get to check if alarm is on
		void set_onOff(bool state);
		bool get_onOff();
		//Print WakeUpLightInfo
		void get_info();

		wakeUpLight(unsigned int hour, unsigned int minute, std::string soundchoice, unsigned int light, bool state=false);
		wakeUpLight();
		~wakeUpLight();

};
#endif
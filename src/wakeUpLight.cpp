#include "include/wakeUpLight.hpp"  
#include <iostream>
	
void wakeUpLight::set_alarmTime(unsigned int hour, unsigned int minute) {
    if (0 < hour && hour <= 23)
    {
        if(0 < minute && minute <= 59)
        alarmTimeHour=hour;
        alarmTimeMinute=minute;
        return;
    }
    std::cout << "You have chosen an invalid time for the alarm, the time has not been set" << std::endl;
}

void wakeUpLight::get_alarmTime() {
    
}

void wakeUpLight::set_musicType(unsigned int soundnumber) {
    switch(soundnumber) {
  case 1:
     sound = "Birds";
    break;
  case 2:
     sound = "OceanWaves";
    break;
  default:
    sound = "Birds";
}
}

std::string wakeUpLight::get_musicType() {
    return sound;
}

void wakeUpLight::set_lighLevel(unsigned int brightness) {
    if( 0 < brightness && brightness < 10)
    {
        lightLevel=brightness;
        return;
    }
    std::cout << "You have chosen an invalid brightness value, choose a value from 1-9. The brightness has not been set." << std::endl;
}

bool wakeUpLight::get_lighLevel() {
    return lightLevel;
}


void wakeUpLight::set_onOff(bool state) {
    onOff = state;
}

bool wakeUpLight::get_onOff() {
    return onOff;
}

void wakeUpLight::get_info() {
    std::cout << "-----Information about the wakeuplight-----" << std::endl;
   std::cout << "Alarmtime: " << alarmTimeMinute << ":"<< alarmTimeMinute <<std::endl;
   std::cout << "AlarmSound: " << sound  << std::endl;
    std::cout << "Brightness of alarm: "<< lightLevel   << std::endl;
   if (onOff)
   {
      std::cout << "Alarm: on"  << std::endl; 
   }
   else{
      std::cout << "Alarm: off"  << std::endl;
   }
    
   std::cout << "-------------------------------------------" << std::endl << std::endl;
}

 


wakeUpLight::wakeUpLight() {
    
}

wakeUpLight::~wakeUpLight() {
    
}

#ifndef SENSORS_H
#define SENSORS_H
#pragma once

class Sensors {
	/*  
	private:
		int* LightValue;
		int* MotionValue; 
		int* Soundvalue;
		int* TempValue;
		//To check that the sensors are working or not or simple to activate
		// a sensore we set it to true or false for which we used bool as return type
		bool LightPower; 
		bool MotionPower; 
		bool SoundPower; 
		bool TempPower; 
	*/
	public:	
		// Constructur
		 Sensors(); 
		// Destructur
		 ~Sensors();
		/*
		// -----
		virtual void setLight(int value) = 0;
		virtual void setMotion(int value) = 0;
		virtual void setSound(int value) = 0;
		virtual void setTemp(int value) = 0;
		// -----
		virtual int getLight() = 0;
		virtual int getMotion() = 0;	
		virtual int getSound() = 0;
		virtual int getTemp() = 0;
		// ------
		virtual bool checkLight() = 0;
		virtual bool checkMotion() = 0;
		virtual bool checkSound() = 0;
		virtual bool checkTemp() = 0;
		// --------
		virtual void printLightSensor() = 0;
        virtual void printMotionSensor() = 0;
        virtual void printSoundSensor() = 0;
        virtual void printTempSensor() = 0;
	*/

};
#endif



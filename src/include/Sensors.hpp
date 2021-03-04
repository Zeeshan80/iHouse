#ifndef SENSORS_H
#define SENSORS_H
#pragma once

class Sensors  
{
	private:

	public:
		int Light, Motion, Sound, Temp;
		//To check that the sensors are working or not or simple to activate
		// a sensore we set it to true or false for which we used bool as return type
		bool Light1, Motion1, Sound1, Temp1; 
		// Constructur
		Sensors(); 
		// Destructur
		~Sensors();
		// -----
		void setLight();
		void setMotion();
		void setSound();
		void setTemp();
		// -----
		int getLight();
		int getMotion();	
		int getSound();
		int getTemp();
		// ------
		bool checkLight();
		bool checkMotion();
		bool checkSound();
		bool checkTemp();
	

};
#endif



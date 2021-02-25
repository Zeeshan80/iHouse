#ifndef BATHTUB_H
#define BATHTUB_H
#pragma once
	
class bathtub  
{
	private:
	unsigned int temperature;
	unsigned int waterLevel;
	bool bubbles;

	public:
		//Set and get function for temperature in the bathtub
		void set_temp(unsigned int temp);
		int get_temp();
		//Set and get function for the waterlevel in the bathtub
		void set_waterLevel(unsigned int height);
		int get_waterLevel();
		//Set and get function for the bubbles
		void set_bubbleState(bool state);
		bool get_bubbleState();
		//print info about the bathtub
		void get_bathtubInfo();
		//Constructors and dectructor for the bathtub
		bathtub(unsigned int temp, unsigned int height, bool state);
		bathtub();
		~bathtub();

};
#endif
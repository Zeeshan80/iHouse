#ifndef BADEKAR_H
#define BADEKAR_H
#pragma once
	
class badekar  
{
	private:
	int temperature;
	int waterLevel;
	bool bubbles;

	public:
		void set_temp(int temp);
		int get_temp();

		void set_waterLevel(int height);
		int get_waterLevel();
		
		void set_bubbleState(bool state);
		bool get_bubbleState();

		badekar(int temp, int height, bool state);
		badekar();
		~badekar();

};
#endif
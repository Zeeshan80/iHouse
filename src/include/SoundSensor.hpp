#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H
#pragma once
	
class SoundSensor  
{
	private:
		int value;
	public:
		SoundSensor();
		~SoundSensor();
		void Init();
		void Write();
		void Read();	
		void setValue(int v);
		int getValue();



};
#endif
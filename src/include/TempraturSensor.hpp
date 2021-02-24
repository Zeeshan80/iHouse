#ifndef TEMPRATURSENSOR_H
#define TEMPRATURSENSOR_H
#pragma once
	
class TempraturSensor //: virtual public Sensorer
{
	private:

	public:
		TempraturSensor();
		~TempraturSensor();
		void Init();
		void Write();
		void Read();
};
#endif
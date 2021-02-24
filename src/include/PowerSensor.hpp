#ifndef POWERSENSOR_H
#define POWERSENSOR_H
#pragma once
	
class PowerSensor //: virtual public Sensorer
{
	private:

	public:
		PowerSensor();
		~PowerSensor();
		void Init();
		void Write();
		void Read();
};
#endif
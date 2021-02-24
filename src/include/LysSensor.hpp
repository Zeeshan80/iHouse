#ifndef LYSSENSOR_H
#define LYSSENSOR_H
#pragma once
	
class LysSensor //: virtual public Sensorer 
{
	private:

	public:
		LysSensor();
		~LysSensor();
		void Init();
		void Write();
		void Read();

};
#endif
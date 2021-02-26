#ifndef SENSORS_H
#define SENSORS_H
#pragma once
	
class Sensors  
{
	private:

	public:

		Sensors();
		~Sensors();
		virtual void Init() = 0;
	  	virtual void Write() = 0;
		virtual void Read() = 0;
	
/* 	void setValue(int v){ 
		value = v;
	}
	int getValue{){
		return value;
	}
 */


};
#endif
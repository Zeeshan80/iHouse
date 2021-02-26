#ifndef SENSORER_H
#define SENSORER_H
#pragma once
	


class Sensorer  
{
	private:
	// int value;

	public:
		Sensorer();
		~Sensorer();
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
#ifndef SENSORER_H
#define SENSORER_H
#pragma once
	


class Sensorer  
{
	private:

	public:
		Sensorer();
		~Sensorer();
		virtual void Init() = 0;
	  	virtual void Write() = 0;
		virtual void Read() = 0;
};
#endif 
#ifndef LYDSENSOR_H
#define LYDSENSOR_H
#pragma once

#include "Sensorer.hpp"

class LydSensor : public Sensorer
{
	private:
	int value;

	public:
		LydSensor();
		~LydSensor();
		void Init();
		void Write();
		void Read();
		void setValue(int v);
		int getValue();


};
#endif
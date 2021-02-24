#ifndef LYDSENSOR_H
#define LYDSENSOR_H
#pragma once

#include "Sensorer.hpp"

class LydSensor : public Sensorer
{
	private:

	public:
		LydSensor();
		~LydSensor();
		void Init_1();
		void Write();
		void Read();
};
#endif
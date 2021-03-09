#ifndef KITCHEN_H
#define KITCHEN_H
#pragma once
#include "room.hpp"
	
class Kitchen  : public room
{
	private:
	int KitchenSelection;
	//fikse kaffemaskin elns

	public:
		//Constructors and destructors for the kitchen
		Kitchen();
		~Kitchen();
		Kitchen(double temperature1,double humidity1,bool light1=false,bool personInBedroom=false);
		
		//Get room type.
		std::string name();
		
		


};
#endif
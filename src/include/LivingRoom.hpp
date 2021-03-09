#ifndef LIVINGROOM_H
#define LIVINGROOM_H
#pragma once
#include "room.hpp"


class LivingRoom : public room 
{
	protected:
		
	public:
		// Constructors and destructors for the livingroom
		LivingRoom(double temperature1,double humidity1,int light1=0,bool personInBedroom=false);
		LivingRoom();
		~LivingRoom();

		//Get room type
		std::string name();

};
#endif
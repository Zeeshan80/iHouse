#include "include/LivingRoom.hpp"
	
LivingRoom::LivingRoom(){}	
LivingRoom::~LivingRoom(){}


LivingRoom::LivingRoom(double temperature1,double humidity1,bool light1,bool personInBedroom)
{
    temperature=temperature1;
    humidity=humidity1;
    light=light1;
    personInRoom=personInBedroom;
}

std::string LivingRoom::name()
{
    return "livingoom";
}

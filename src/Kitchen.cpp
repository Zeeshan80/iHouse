#include "include/Kitchen.hpp"

	
Kitchen::Kitchen(){}
	
Kitchen::~Kitchen(){}

Kitchen::Kitchen(double temperature1,double humidity1,int light1,bool personInBedroom)
{
    temperature=temperature1;
    humidity=humidity1;
    light=light1;
    personInRoom=personInBedroom;
}



std::string Kitchen::name()
{
    return "Kitchen";
}
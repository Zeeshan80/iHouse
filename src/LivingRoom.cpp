#include "include/LivingRoom.hpp"
	
LivingRoom::LivingRoom(){}	
LivingRoom::~LivingRoom(){}

void LivingRoom::setLivingRoom(int selection){
    LivingRoomSelection = selection;
}

int LivingRoom::getLivingRoom(){
    return LivingRoomSelection;
}

void LivingRoom::printLivinRoom(){
   if (getLivingRoom() && MotionSensor::checkMotion() == true ) {
       std::cout << "Motion detected in livingroom" << std::endl; 
   }
}
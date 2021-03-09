#include "include/BathRoom.hpp"
#include "iostream"
	
	
BathRoom::BathRoom(){}
	
BathRoom::~BathRoom(){}

void BathRoom::setBathRoom(int selection){
    BathRoomSelection = selection;
}

int BathRoom::getBathRoom(){
    return BathRoomSelection;
}

void BathRoom::printBathRoom(){
    if (getBathRoom() && MotionSensor::checkMotion() == true ) {
       std::cout << "Motion detected in bathroom" << std::endl;
    }

}
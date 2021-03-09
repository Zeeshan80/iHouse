#include "include/SleepingRoom.hpp"
#include "iostream"
	
	
SleepingRoom::SleepingRoom(){}
	
SleepingRoom::~SleepingRoom(){}

void SleepingRoom::setSleepingRoom(int selection){
    SleepingRoomSelection = selection;
}

int SleepingRoom::getSleepingRoom(){
    return SleepingRoomSelection;
}

void SleepingRoom::printSleepingRoom(){
    if (getSleepingRoom() && MotionSensor::checkMotion() == true ) {
       std::cout << "Motion detected in sleepingroom" << std::endl;
    }

}
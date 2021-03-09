#include "include/MotionSensor.hpp"
#include "iostream"
	
MotionSensor::MotionSensor(){}
MotionSensor::~MotionSensor(){}

MotionSensor::MotionSensor(int timer,room* room)
{
    MotionValue=timer;
    roomObject=room;
    activated=false;
}

void MotionSensor::setMotionTime(int value){
    MotionValue = value;
}

bool MotionSensor::checkMotionState(){
    MotionState=roomObject->get_personInRoom();
    return roomObject->get_personInRoom();
}



int MotionSensor::getMotionTime(){
    return MotionValue;
}

void MotionSensor::printMotionSensor(){
    std::ostringstream oss;
    oss << "Motion sensor for " << roomObject->name() <<  " with an countdown time of: " << MotionValue  <<" seconds"  << std::endl;
    std::string var = oss.str();
    var = oss.str();
    std::cout << var;

 }


void MotionSensor::sensorThread()
{  
    countdown = MotionValue;
    activated=true;
    while(countdown > 0){
        if(checkMotionState()){
            countdown = MotionValue;
        }
        else{
            countdown = countdown-1;       
        }
           std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    activated=false;
}

bool MotionSensor::getActivated()
{
    return activated;
}
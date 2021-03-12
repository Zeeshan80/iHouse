#include "include/MotionSensor.hpp"
#include "iostream"
	
MotionSensor::MotionSensor(){}
MotionSensor::~MotionSensor(){}

void MotionSensor::setMotion(int value){
    MotionValue = value;
}

bool MotionSensor::checkMotion(){
    if (MotionValue > 1 && MotionValue < 10)     
        return (MotionPower == true);
    else
        return (MotionPower == false); 
}

int MotionSensor::getMotion(){
    return MotionValue;
}

void MotionSensor::printMotionSensor(){
    std::cout << "Motion sensor is on: " << checkMotion() << std::endl;
      /*   if (checkMotion() == true) {
            std::cout << "Motion detected in the room" << std::endl;
        }
        else
            std::cout << "--------------" << std::endl; */
        }

#include "include/MotionSensor.hpp"
#include "iostream"
	
MotionSensor::MotionSensor(){}
MotionSensor::~MotionSensor(){}

void MotionSensor::setMotion(int value){
    MotionValue = value;
}

bool MotionSensor::checkMotion(){
    if (MotionValue < 10)     
        return (MotionPower == false);
    else
        return (MotionPower == true); 
}

int MotionSensor::getMotion(){
    return MotionValue;
}

void MotionSensor::printMotionSensor(){
    std::cout << "----------" << std::endl;
}

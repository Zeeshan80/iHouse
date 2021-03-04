#include "include/MotionSensor.hpp"
#include "iostream"
	
MotionSensor::MotionSensor(){}
MotionSensor::~MotionSensor(){}

void MotionSensor::setMotion(){
    MotionValue = true;
}

int MotionSensor::getMotion(){
    return MotionValue;
}

bool MotionSensor::checkMotion(){
    if (MotionValue < 10)     
        return true;
    else
        return false; 
}
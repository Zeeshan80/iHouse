#include "include/MotionSensor.hpp"
#include "iostream"
	
MotionSensor::MotionSensor(){}
MotionSensor::~MotionSensor(){}

void MotionSensor::setMotion(){
    Motion1 = true;
}

int MotionSensor::getMotion(){
    return Motion;
}

bool MotionSensor::checkMotion(){
    if (Motion < 10)     
        return true;
    else
        return false; 
}
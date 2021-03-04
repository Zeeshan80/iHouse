#include "include/LightSensor.hpp"
#include "iostream"

LightSensor::LightSensor(){}
	
LightSensor::~LightSensor(){}

void LightSensor::setLight(){
    Light1 = true;
}

int LightSensor::getLight(){
    return Light;
}

bool LightSensor::checkLight(){
    if (Light < 10)     
        return true;
    else
        return false; 
}
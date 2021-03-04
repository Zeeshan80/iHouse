#include "include/LightSensor.hpp"
#include "iostream"

LightSensor::LightSensor(){}
LightSensor::~LightSensor(){}

void LightSensor::setLight(int *value){
    *LightValue = *value;
}

int LightSensor::getLight(){
    return *LightValue;
}

bool LightSensor::checkLight(){
    if (*LightValue < 10)     
        return true;
    else
        return false; 
}
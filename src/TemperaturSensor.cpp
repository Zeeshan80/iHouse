#include "include/TemperaturSensor.hpp"  
#include "iostream"
	
TemperaturSensor::TemperaturSensor(){}
TemperaturSensor::~TemperaturSensor(){}

void TemperaturSensor::setTemp(){
    TempValue = true;
}

int TemperaturSensor::getTemp(){
    return TempValue;
}

bool TemperaturSensor::checkTemp(){
    if (TempValue < 10)     
        return true;
    else
        return false;  
}
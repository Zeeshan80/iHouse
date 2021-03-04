#include "include/TemperaturSensor.hpp"  
#include "iostream"
	
TemperaturSensor::TemperaturSensor(){}
TemperaturSensor::~TemperaturSensor(){}

void TemperaturSensor::setTemp(){
    Temp1 = true;
}

int TemperaturSensor::getTemp(){
    return Temp;
}

bool TemperaturSensor::checkTemp(){
if (Temp < 10)     
    return true;
else
    return false;  
}
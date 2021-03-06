#include "include/TemperaturSensor.hpp"  
#include "iostream"
#include <ratio>
	
TemperaturSensor::TemperaturSensor(){}
TemperaturSensor::~TemperaturSensor(){}

void TemperaturSensor::setTemp(int value){
    TempValue = value;
}

bool TemperaturSensor::checkTemp(){
    if (TempValue > 20 && TempValue < 50)     
        return (TempPower == false);
    else
        return (TempPower == true);  
}

int TemperaturSensor::getTemp(){
    return TempValue;
}

void TemperaturSensor::printTempSensor(){

    if (TempValue > 20 ) {
        std::cout << "The temperature is: " << TempValue << " \u2103" <<std::endl; 
    }
    else
        std::cout << "It is to chilli, you should power on the sensor and adjust the temperature up" << std::endl; 

}
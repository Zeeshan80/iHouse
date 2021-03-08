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
    std::cout << "Temp sensor is on: " << checkTemp() << std::endl;
        if (checkTemp() == true) {
            std::cout << "Regulate the temperature by giving a input for desired temperature: " << getTemp() << std::endl;
                if (TempValue > 20 ) {
                     std::cout << "The temperature is: " << TempValue << " \u2103" <<std::endl; 
                }
                else
                    std::cout << "It is to chilli, you should power on the sensor and adjust the temperature up" << std::endl; 
                }
        else if (checkTemp() == false) {
            std::cout << "The temperature gauge is off " << std::endl;
        }
}
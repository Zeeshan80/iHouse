#include "include/LightSensor.hpp"
#include "iostream"
#include <cstddef>
#include <iomanip>

LightSensor::LightSensor(){
    
}
LightSensor::~LightSensor(){
    
}

void LightSensor::setLight(int value){
        LightValue = value;
}

bool LightSensor::checkLight(){
    if (LightValue < 10) 
        return (LightPower == false); 
    else
        return (LightPower == true);
}

int LightSensor::getLight(){
    return LightValue;
}

void LightSensor::printLightSensor(){
        if (LightValue < 10){
        // std::cout << std::boolalpha;
        // std::cout << "Light is on = " << LightPower << std::endl;
        std::cout << "Intensity of light is: " << getLight() << " lux" << std::endl;
        }
        else{
            std::cout << "Your input is out of range, therefor light is still off.\nPlease try a number between 1 and 10." << std::endl;
        }

}


#include "include/LightSensor.hpp"
#include "iostream"
#include <cstddef>
#include <iomanip>

LightSensor::LightSensor(){}
LightSensor::~LightSensor(){}

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
    std::cout << "Light sensor is on: " << checkLight() << std::endl;
        if (checkLight() == true) {
            std::cout << "Give a input for adjusting intensity of the light: " << getLight() << std::endl;
                if (LightValue < 10){
                    std::cout << "Intensity of light is: " << getLight() << " lux" << std::endl;
                }
                else{
                    std::cout << "Your input is out of range, therefor light is still off.\nPlease try a number between 1 and 10." << std::endl;  
                }           
        }
        else if (checkLight() == false){
            std::cout << "The light is off " << std::endl;
        }         
}


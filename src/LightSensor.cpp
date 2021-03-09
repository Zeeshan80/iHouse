#include "include/LightSensor.hpp"
#include <iomanip>

LightSensor::LightSensor(){}
LightSensor::~LightSensor(){}

LightSensor::LightSensor(int brightness,  room* room, MotionSensor* motionSensor, bool state)
{
    LightValue=brightness;
    LightSensoronOff=state;
    roomObject=room;
    motionSensorObject=motionSensor;
}


bool LightSensor::lightStatus(){
    return LightSensoronOff;
}

void LightSensor::setLightValue(int value){
        LightValue = value;
}

int LightSensor::getLightValue(){
    return LightValue;
}


void LightSensor::sensorThread()
{
    while(motionSensorObject->getActivated() && LightSensoronOff)
    {
        roomObject->set_lightLevel(LightValue);
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }
}

void LightSensor::enableSensorThread()
{
    LightSensoronOff=true;
}

void LightSensor::disableSensorThread()
{
    LightSensoronOff=false;
}



/*void LightSensor::printLightSensor(){
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
}*/


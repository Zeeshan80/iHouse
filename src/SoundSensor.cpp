#include "include/SoundSensor.hpp"
#include "iostream"

SoundSensor::SoundSensor(){}
SoundSensor::~SoundSensor(){}

void SoundSensor::setSound(int value){
    SoundValue = value; 
}

bool SoundSensor::checkSound(){
if (SoundValue < 10)     
    return (SoundPower == false);
else
    return (SoundPower == true); 
}

int SoundSensor::getSound(){
return SoundValue;
} 

void SoundSensor::printSoundSensor(){
    std::cout << "Sound sensor is on: " << checkSound( )<< std::endl;
        if (checkSound() == true) {     
            std::cout << "Use the volume button to adjust the volume from 1 to 10: " << getSound() << std::endl;
            std::cout << "The volum is -" << getSound() << " dB " <<  std::endl;
        }
        else if (checkSound() == false){
            std::cout << "The sound is off " << std::endl;
        } 

}


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

std::cout << "The volum is -" << getSound() << " dB " <<  std::endl;

}


#include "include/SoundSensor.hpp"
#include "iostream"

SoundSensor::SoundSensor(){}
SoundSensor::~SoundSensor(){}

void SoundSensor::setSound(){
    SoundValue = true; 
}

int SoundSensor::getSound(){
return SoundValue;
} 

bool SoundSensor::checkSound(){
if (SoundValue < 10)     
    return true;
else
    return false; 
}



/* void SoundSensor::setValue(int v){
    value = v;
}

int SoundSensor::getValue(){
    return value;
}

void SoundSensor::Soundadjustment(){

    if(getValue()<10){ 
       std::cout << "Lyset er på " << std::endl;
       std::cout << std::endl;
    }
    else{
         std::cout << "Lyset er av " << std::endl;
         std::cout << std::endl;
    }
        
} */
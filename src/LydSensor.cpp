#include "include/LydSensor.hpp"  
#include "include/Sensorer.hpp"
#include "iostream"

LydSensor::LydSensor()
{	
}
	
LydSensor::~LydSensor()
{	
}

void LydSensor::Init()
{
} 

void LydSensor::Write()
{
}

void LydSensor::Read()
{
}

void LydSensor::setValue(int v){
    value = v;
}

int LydSensor::getValue(){
    return value;
}
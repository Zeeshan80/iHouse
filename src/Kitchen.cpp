#include "include/Kitchen.hpp"
#include "include/MotionSensor.hpp"
#include "iostream"
	
Kitchen::Kitchen(){}
	
Kitchen::~Kitchen(){}

void Kitchen::setKitchen(int selection){
    KitchenSelection = selection;
}

int Kitchen::getKitchen(){
    return KitchenSelection;
}

void Kitchen::printKitchen(){
    if (getKitchen() && MotionSensor::checkMotion() == true ) {
       std::cout << "Motion detected in kitchen" << std::endl;
    }

}
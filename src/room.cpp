#include "include/room.hpp" 
#include "iostream"

	
room::room(){}
	
room::~room(){}


void room::set_temp(unsigned int temp) {
    if(0 < temp && temp < 30){
    temperature=temp;
    return;
    }
    std::cout<< "The temperature must be between 0 and 30 degrees celcius." << std::endl;
}

int room::get_temp() {
    return temperature;
}

void room::set_humidity(unsigned int humidityInAir) {
    if(20 < humidityInAir && humidityInAir < 70){
    humidity=humidityInAir;;
    return;
    }
    std::cout<< "The humidity must be between 20 and 70 %" << std::endl;

}

int room::get_humidity() {
    return humidity;
}

void room::set_lightLevel( bool state) {
    light=state;
}

bool room::get_lightLevel() {
    return light;
}


void room::set_personInRoom(bool state) {
    personInRoom=state;
}

bool room::get_personInRoom() {
    return personInRoom;
}

std::string room::name(){
    return "room";
}
#include "include/bedroom.hpp" 
#include "iostream"
	
void bedroom::set_temp(unsigned int temp) {
    if(0 < temp && temp < 30){
    temperature=temp;
    return;
    }
    std::cout<< "The temperature must be between 0 and 30 degrees celcius." << std::endl;
}

int bedroom::get_temp() {
    return temperature;
}

void bedroom::set_humidity(unsigned int humidityInAir) {
    if(20 < humidityInAir && humidityInAir < 70){
    humidity=humidityInAir;;
    return;
    }
    std::cout<< "The humidity must be between 20 and 70 %" << std::endl;

}

int bedroom::get_humidity() {
    return humidity;
}

void bedroom::set_lightLevel( bool state) {
    light=state;
}

bool bedroom::get_lightLevel() {
    return light;
}




bedroom::bedroom() {
    
}

bedroom::~bedroom() {
    
}
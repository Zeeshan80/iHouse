#include "include/bathroom.hpp"  
#include <iostream>
	
void bathroom::set_temp(unsigned int temp) {
    if(0 < temp && temp < 30){
    temperature=temp;
    return;
    }
    std::cout<< "The temperature must be between 0 and 30 degrees celcius." << std::endl;
}

int bathroom::get_temp() {
    return temperature;
}

void bathroom::set_humidity(unsigned int humidityInAir) {
    if(20 < humidityInAir && humidityInAir < 70){
    humidity=humidityInAir;;
    return;
    }
    std::cout<< "The humidity must be between 20 and 70 %" << std::endl;

}

int bathroom::get_humidity() {
    return humidity;
}

void bathroom::set_waterLeak(bool state) {
    waterLeak = state;
}

bool bathroom::get_waterLeak() {
    return waterLeak;
}

void bathroom::set_lightstate(bool state) {
    light=state;
}

bool bathroom::get_lightstate() {
    return light;
}

void bathroom::set_personInBathroom(bool state) {
    personInBathroom=state;
}

bool bathroom::get_personInBathroom() {
    return personInBathroom;
}

void bathroom::set_music(std::string song) {
    music=song;
}

std::string bathroom::get_music() {
    return music;
}

void bathroom::set_bathtub(unsigned int waterTemperature , unsigned int waterHeight, bool bubblestate)
{
    
	bathtub->set_waterLevel(waterHeight);
	bathtub->set_bubbleState(bubblestate);
    bathtub->set_temp(waterTemperature);

}

void bathroom::set_bathtub_temperature(unsigned int waterTemperature)
{
    bathtub->set_temp(waterTemperature);
}

void bathroom::set_bathtub_waterHeight(unsigned int waterHeight)
{
    bathtub->set_waterLevel(waterHeight);
}

void bathroom::set_bathtub_bubbles(bool bubblestate)
{
    bathtub->set_bubbleState(bubblestate);
}


void bathroom::get_bathtubinfo()
{
    bathtub->get_bathtubInfo();
}




bathroom::bathroom(double temperature1,double humidity1,bool waterLeak1,bool light1,bool personInBathroom1,std::string music1)
{
    temperature=temperature1;
    humidity=humidity1;
    waterLeak=waterLeak1;
    light=light1;
    personInBathroom=personInBathroom1;
    music=music1;
}

bathroom::bathroom() {}

bathroom::~bathroom() {}
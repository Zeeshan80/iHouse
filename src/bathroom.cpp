#include "include/bathroom.hpp"  
#include <iostream>

void bathroom::set_waterLeak(bool state) {
    waterLeak = state;
}

bool bathroom::get_waterLeak() {
    return waterLeak;
}

void bathroom::set_music(std::string song) {
    music=song;
}

std::string bathroom::get_music() {
    return music;
}

void bathroom::set_bathtub(unsigned int waterTemperature , unsigned int waterHeight, bool bubblestate)
{
    bathtubBathroom = new bathtub(waterTemperature, waterHeight, bubblestate);
}

bathtub* bathroom::get_bathtub()
{
    return bathtubBathroom;
}

void bathroom::get_bathtubinfo()
{
    bathtubBathroom->get_bathtubInfo();
}

std::string bathroom::name()
{
    return "Bathroom";
}

bathroom::bathroom(double temperature1,double humidity1,bool waterLeak1,bool light1,bool personInBathroom1,std::string music1)
{
    temperature=temperature1;
    humidity=humidity1;
    waterLeak=waterLeak1;
    light=light1;
    personInRoom=personInBathroom1;
    music=music1;
}

bathroom::bathroom() {}

bathroom::~bathroom() {}
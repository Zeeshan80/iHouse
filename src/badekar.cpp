#include "include/badekar.hpp"  
	
badekar::badekar()
{
    temperature=0;
    waterLevel=0;
    bubbles=false;
}
	
badekar::~badekar()
{}

badekar::badekar(int temp = 0, int height=0, bool state=false)
{
    temperature=temp;
    waterLevel=height;
    bubbles=state;
}


void badekar::set_temp(int temp)
{
    temperature = temp;
}

int badekar::get_temp()
{
    return temperature;
}


void badekar::set_waterLevel(int height)
{
    waterLevel= height;
}

int badekar::get_waterLevel()
{
    return waterLevel;
}


void badekar::set_bubbleState(bool state)
{
    bubbles = state;
}

bool badekar::get_bubbleState()
{
    return bubbles;
}
#include "include/bathtub.hpp"  
#include "iostream"
	
bathtub::bathtub()
{
    temperature=0;
    waterLevel=0;
    bubbles=false;
}
	
bathtub::~bathtub()
{}

bathtub::bathtub(unsigned int temp = 0, unsigned int height=0, bool state=false)
{
    if(0 < temp && temp < 50){
        temperature=temp;
    }
    else{
        temperature=0;
        std::cout<< "The temperature must be between 0 and 50 degrees celcius." << std::endl;
        }

    if(0 < height && height < 100){
         waterLevel= height;
    }
    else{
        waterLevel=0;
        std::cout<< "The bathtub only has room available for 0-100cm water." << std::endl;
        }

    bubbles=state;
}


void bathtub::set_temp(unsigned int temp)
{
    if(0 < temp && temp < 50){
    temperature=temp;
    return;
    }
    std::cout<< "The temperature must be between 0 and 50 degrees celcius." << std::endl;
}

int bathtub::get_temp()
{
    return temperature;
}


void bathtub::set_waterLevel(unsigned int height)
{
    if(0 < height && height < 100){
    waterLevel= height;
    return;
    }
    std::cout<< "The bathtub only has room available for 0-100cm water." << std::endl;

}

int bathtub::get_waterLevel()
{
    return waterLevel;
}


void bathtub::set_bubbleState(bool state)
{
    bubbles = state;
}

bool bathtub::get_bubbleState()
{
    return bubbles;
}

void bathtub::get_bathtubInfo()
{
   std::cout << "-----Information about the bathtub-----" << std::endl;
   std::cout << "Temperature: " << temperature << " Degrees Celcius" <<std::endl;
   std::cout << "WaterLevel: " << waterLevel << " cm"  << std::endl;
   if (bubbles)
   {
      std::cout << "Bubbles: on"  << std::endl; 
   }
   else{
      std::cout << "Bubbles: off"  << std::endl;
   }
    
   std::cout << "---------------------------------------" << std::endl << std::endl;
}
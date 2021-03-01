
#include "iostream"
#include "include\bathroom.hpp"
#include "include\bathtub.hpp"
#include <thread>


//Variable so i can stop running the readSensorTemperature loop until not needed
static bool s_Finished = false;

void readSensorTemperature()
{
  //Using the namespace below so i can use 10s in the sleep_for
  using namespace std::literals::chrono_literals;
  while(!s_Finished)
  {
    std::cout << "working..." << std::endl;
    std::this_thread::sleep_for(10s);
  }
}

//mingw32-make
int main(){
  /*  std::cout<< "noe skjer" << std::endl;
    bathtub* badekaret = new bathtub();
    std::cout<< badekaret->get_bubbleState() << std::endl;
    std::cout<< badekaret->get_waterLevel() << std::endl;
    std::cout<< badekaret->get_temp() << std::endl;
    badekaret->set_temp(50);
    std::cout<< badekaret->get_temp() << std::endl;
    badekaret->get_bathtubInfo();
    badekaret->get_bathtubInfo();
    badekaret->get_bathtubInfo();
    std::cout<< "noe er ferdig" << std::endl;*/


    //Starting the thread
    std::thread readSensor(readSensorTemperature);
    //This makes the readSensorTemeprature run until you press "enter"
    std::cin.get();
    s_Finished = true;
    //Wait until thread is finished before finishing code
    readSensor.join();

    std::cin.get();
    //Standard return variable
    return 0;
}
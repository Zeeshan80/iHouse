
#include "iostream"
#include "include\bathroom.hpp"
#include "include\bathtub.hpp"
#include "include\lightSensorTest.hpp"
#include <thread>
  
 

//Variable so i can stop running the readSensorTemperature loop until not needed
static bool s_Finished = false;

void readSensorTemperature()
{
  //Using the namespace below so i can use 10s in the sleep_for
  while(!s_Finished)
  {
    std::cout << "working test thread..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
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


    /*//Starting the thread
    std::thread readSensor(readSensorTemperature);
    //This makes the readSensorTemeprature run until you press "enter"
    std::cin.get();
    s_Finished = true;
    //Wait until thread is finished before finishing code
    readSensor.join();

    std::cin.get();*/

  //making sensor
  lightSensorTest* sensoren = new lightSensorTest();
  sensoren->enableSensorThread();
  //starting the thread to monitor temp
  std::thread t(&lightSensorTest::sensorThread, sensoren);

  //Set temp 10
  std::cin.get();
  sensoren->set_Temp(10);
  //Set temp 30
   std::cin.get();
  sensoren->set_Temp(30);
  //turn sensor of using t.join else i will get problem.
   std::cin.get();
  sensoren->disableSensorThread();
  t.join();
  //get temp to check its same as sensor
  std::cout << sensoren->get_Temp() << std::endl;


    //Standard return variable
    return 0;
}
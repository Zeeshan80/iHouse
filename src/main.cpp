
#include "iostream"
#include "include\bathroom.hpp"
#include "include\bathtub.hpp"
#include "include\heatSensorBathroom.hpp"
#include <thread>
  
 

//mingw32-make
int main(){

  //making a bathroom
  bathroom* bathroom1 = new bathroom(5,40);
  std::cout << bathroom1->get_temp() << std::endl;
   std::cout << bathroom1->get_humidity() << std::endl;

  //making sensor
  heatSensorBathroom* sensoren = new heatSensorBathroom(20, bathroom1);
  sensoren->enableSensorThread();
  //starting the thread to monitor temp
  std::thread t(&heatSensorBathroom::sensorThread, sensoren);

  //Set temp 10
  std::cin.get();
  bathroom1->set_temp(10);
  //Set temp 30
   std::cin.get();
    bathroom1->set_temp(30);
  //turn sensor of using t.join else i will get problem.
   std::cin.get();
  sensoren->disableSensorThread();
  t.join();
  //get temp to check its same as sensor
  std::cout << sensoren->get_Temp() << std::endl;


    //Standard return variable
    return 0;
}
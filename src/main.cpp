
#include "iostream"
#include "include\bathroom.hpp"
#include "include\bathtub.hpp"
#include "include\heatSensorBathroom.hpp"
#include "include\humiditySensor.hpp"
#include <thread>

//mingw32-make
int main(){

  //making a bathroom
  bathroom* bathroom1 = new bathroom(5,40);

  //making temperaturesensor
  heatSensorBathroom* sensorTempBathroom = new heatSensorBathroom(20, bathroom1,true);
  //starting the thread to monitor temp
  std::thread t1(&heatSensorBathroom::sensorThread, sensorTempBathroom);
  
  //making a humidity sensor
  humiditySensor* sensorHumidityBathroom = new humiditySensor(50, bathroom1,true);
  //starting the thread to monitor humidity
  std::thread t2(&humiditySensor::sensorThread, sensorHumidityBathroom);

  //Set temp 10
  std::cin.get();
  bathroom1->set_temp(10);
  //Set temp 30
  std::cin.get();
  bathroom1->set_temp(30);
  //turn sensor of using t.join else i will get problem.
  std::cin.get();
  sensorTempBathroom->disableSensorThread();
  sensorHumidityBathroom->disableSensorThread();
  t1.join();
  t2.join();
  //Standard return variable
  return 0;
}
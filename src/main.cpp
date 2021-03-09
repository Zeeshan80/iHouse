
#include "iostream"
#include "include\bathroom.hpp"
#include "include\bedroom.hpp"
#include "include\Kitchen.hpp"
#include "include\LivingRoom.hpp"
#include "include\heatSensor.hpp"
#include "include\humiditySensor.hpp"
#include "include\MotionSensor.hpp"

#include "include/LightSensor.hpp"


#include <thread>

//mingw32-make
int main(){


  //making a bathroom
  bathroom* bathroom1 = new bathroom(5,30);
  //making a bedroom
  bedroom* bedroom1 = new bedroom(5,30);
  //making a kitchen
  Kitchen* kjokken1 = new Kitchen(50,50);
  //making a livingroom
  LivingRoom* livingroom1 = new LivingRoom(5, 30);

  //making the temperature sensors for the different rooms
  heatSensor* sensorTempBathroom = new heatSensor(20, bathroom1, true);
  heatSensor* sensorTempBedroom = new heatSensor(17, bedroom1, true);

  //starting the threads to monitor the different temperatures
  std::thread t1(&heatSensor::sensorThread, sensorTempBathroom);
  std::thread t2(&heatSensor::sensorThread, sensorTempBedroom);
  
  //making the humidity sensors for the different rooms
  humiditySensor* sensorHumidityBathroom = new humiditySensor(40, bathroom1, true);
  humiditySensor* sensorHumidityBedroom = new humiditySensor(40, bedroom1, true);


  //starting the threads to monitor the different humidity levels.
  std::thread t3(&humiditySensor::sensorThread, sensorHumidityBathroom);
  std::thread t4(&humiditySensor::sensorThread, sensorHumidityBedroom);


  kjokken1->set_personInRoom(true);
  MotionSensor* sensorMotionKitchen = new MotionSensor(5, kjokken1, true);
  std::thread t5(&MotionSensor::sensorThread, sensorMotionKitchen);
 
  LightSensor* sensorLightKitchen = new LightSensor(400, kjokken1,sensorMotionKitchen, true);
 std::thread t6(&LightSensor::sensorThread, sensorLightKitchen);
  std::cin.get();
  kjokken1->set_personInRoom(false);

  std::cin.get();
  
  kjokken1->set_personInRoom(true);
 

  //Changing temperature and humidity in the bathroom
  std::cin.get();
  bathroom1->set_temp(28);
  bathroom1->set_humidity(55);

  //Changing temperature and humidity in the bedroom
  std::cin.get();
  bedroom1->set_temp(24);
  bedroom1->set_humidity(54);

  
  //turn sensor of using t.join else i will get problem.
  std::cin.get();
  sensorTempBathroom->disableSensorThread();
  sensorTempBedroom->disableSensorThread();
  sensorHumidityBedroom->disableSensorThread();
  sensorHumidityBathroom->disableSensorThread();
  t1.join();
  t2.join();
  t3.join();
  t4.join();
  t5.join();
  t6.join();
 
  //Standard return variable
  return 0;
}
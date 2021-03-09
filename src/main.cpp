
#include "iostream"

#include "include\bathroom.hpp"
#include "include\bedroom.hpp"
#include "include\Kitchen.hpp"
#include "include\LivingRoom.hpp"

#include "include\heatSensor.hpp"
#include "include\humiditySensor.hpp"
#include "include\MotionSensor.hpp"
#include "include\LightSensor.hpp"
#include <thread>

//mingw32-make
int main(){

  //lage vannlekkasje sensor for bad og kjøkken 

  //making a bathroom
  bathroom* bathroom1 = new bathroom(5,30);
  //making a bedroom
  bedroom* bedroom1 = new bedroom(5,30);
  //making a kitchen
  Kitchen* kitchen1 = new Kitchen(5,30);
  //making a livingroom
  LivingRoom* livingroom1 = new LivingRoom(5, 30);

  //making the temperature sensors for the different rooms
  heatSensor* sensorTempBathroom = new heatSensor(20, bathroom1, true);
  heatSensor* sensorTempBedroom = new heatSensor(17, bedroom1, true);
  heatSensor* sensorTempKitchen = new heatSensor(17, kitchen1, true);
  heatSensor* sensorTempLivingRoom = new heatSensor(17, livingroom1, true);

  //making the humidity sensors for the different rooms
  humiditySensor* sensorHumidityBathroom = new humiditySensor(40, bathroom1, true);
  humiditySensor* sensorHumidityBedroom = new humiditySensor(40, bedroom1, true);

  //making the motionsensor for the different rooms.
  MotionSensor* sensorMotionBathroom = new MotionSensor(15, bathroom1, true);
  MotionSensor* sensorMotionKitchen = new MotionSensor(30, kitchen1, true);
  MotionSensor* sensorMotionLivingroom = new MotionSensor(30, livingroom1, true);

  //making the lightsensors for the different rooms.
  LightSensor* lightControlBathroom = new LightSensor(400, bathroom1, sensorMotionBathroom, true);
  LightSensor* lightControlitchen = new LightSensor(400, kitchen1, sensorMotionKitchen, true);
  LightSensor* lightControlLivingRoom = new LightSensor(400, livingroom1, sensorMotionKitchen, true);

  //starting the threads to monitor the different temperatures
  std::thread t1(&heatSensor::sensorThread, sensorTempBathroom);
  std::thread t2(&heatSensor::sensorThread, sensorTempBedroom);

  //starting the threads to monitor the different humidity levels.
  std::thread t3(&humiditySensor::sensorThread, sensorHumidityBathroom);
  std::thread t4(&humiditySensor::sensorThread, sensorHumidityBedroom);

  //starting the threads to monitor motion in the chosen rooms
  std::thread t5(&MotionSensor::sensorThread, sensorMotionBathroom);
  std::thread t6(&MotionSensor::sensorThread, sensorMotionKitchen);
  std::thread t7(&MotionSensor::sensorThread, sensorMotionLivingroom);

  //starting the threads to control the automatic lights.
  std::thread t8(&LightSensor::sensorThread, lightControlBathroom);
  std::thread t9(&LightSensor::sensorThread, lightControlitchen);
  std::thread t10(&LightSensor::sensorThread, lightControlLivingRoom);

  //adding a pause so the sensors can setup and fix values
  std::this_thread::sleep_for(std::chrono::seconds(5));
  //Adding a bathtub to the bathroom
  bathroom1->set_bathtub(35,50,false);
  bathroom1->set_music("The best of beethoven");
  //printing bathtub info and music info
  bathroom1->get_bathtub()->get_bathtubInfo();
  std::cout << bathroom1->get_music() << std::endl;//make this print the song maybe

  //adding a wakeup light to the bedroom
  bedroom1->set_wakeUpLight(7,30,"bird",5,true);
  bedroom1->get_wakeUplightInfo();



  kitchen1->set_personInRoom(true);
  std::cin.get();
  kitchen1->set_personInRoom(false);
  std::cin.get();
  kitchen1->set_personInRoom(true);
 

  //Changing temperature and humidity in the bathroom
  std::cin.get();
  bathroom1->set_temp(28);
  bathroom1->set_humidity(55);

  //Changing temperature and humidity in the bedroom
  std::cin.get();
  bedroom1->set_temp(24);
  bedroom1->set_humidity(54);

  
  //Disable and reset sensors
  std::cin.get();
  sensorTempBathroom->disableSensorThread();
  sensorTempBedroom->disableSensorThread();
  sensorTempKitchen->disableSensorThread();
  sensorTempLivingRoom->disableSensorThread();
  sensorHumidityBedroom->disableSensorThread();
  sensorHumidityBathroom->disableSensorThread();
  sensorMotionBathroom->disableSensorThread();
  sensorMotionKitchen->disableSensorThread();
  sensorMotionLivingroom->disableSensorThread();
  t1.join();
  t2.join();
  t3.join();
  t4.join();
  t5.join();
  t6.join();
  t7.join();
  t8.join();
  t9.join();
  t10.join();
 
  //Standard return variable
  return 0;
}
#include "include/humiditySensor.hpp"  
	

humiditySensor::humiditySensor() {}

humiditySensor::humiditySensor(unsigned int humidity, bathroom* room,bool state)
{
    targetHumidity=humidity;
    roomObject=room;
    sensorOn=state;
}

void humiditySensor::set_newRoom(bathroom* room) 
{
    roomObject=room;
}

void humiditySensor::sensorThread() 
{
    std::cout<< "The humidity Sensor for the " << (typeid(*roomObject).name()) << " with a target humidity of: "<< targetHumidity << "% is now turned on" << std::endl;//make string then write
  while(sensorOn)
  {
    if(roomObject->get_humidity() < targetHumidity-3 || roomObject->get_humidity() > targetHumidity+3) // adding a +3 temp range.
    {
      std::cout << "Humidity is out of allowed range, the humidity in the "<< (typeid(*roomObject).name()) <<  " is: " << roomObject->get_humidity() << std::endl;
      roomObject->set_humidity(targetHumidity);// can add a temp sensor which gradually increased temp with +1+1+1+1 per cycle.
           std::cout << "Humidity is now adjusted to: " << roomObject->get_humidity() << std::endl;
    }
    //wait time for sensor before checking humidity again
    std::this_thread::sleep_for(std::chrono::seconds(5));
  }
  std::cout<< "Sensor is turned of" << std::endl;
}



void humiditySensor::enableSensorThread() 
{
    sensorOn=true;
}

void humiditySensor::disableSensorThread() 
{
    sensorOn=false;
}

void humiditySensor::set_targetHumidty(unsigned int humidity) 
{
    targetHumidity=humidity;
}

int humiditySensor::get_humidity() 
{
    return roomObject->get_humidity();
}

humiditySensor::~humiditySensor() {}

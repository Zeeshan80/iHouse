#include "include/humiditySensor.hpp"  


humiditySensor::humiditySensor() {}

humiditySensor::humiditySensor(unsigned int humidity, room* room,bool state)
{
    targetHumidity=humidity;
    roomObject=room;
    sensorOn=state;
}

void humiditySensor::set_newRoom(room* room) 
{
    roomObject=room;
}

void humiditySensor::sensorThread() 
{
    std::ostringstream oss;
    oss << "The humidity Sensor for the " << roomObject->name() << " with a target humidity of: "<< targetHumidity << "% is now turned on" << std::endl;//make string then write
    std::string var = oss.str();
    std::cout << var;
    oss.str("");
    oss.clear();  
    while(sensorOn)
  {
    if(roomObject->get_humidity() < targetHumidity-3 || roomObject->get_humidity() > targetHumidity+3)
    {   

        oss << "Humidity is out of allowed range, the humidity in the "<< roomObject->name() <<  " is: " << roomObject->get_humidity()<< "%" << std::endl;
        var = oss.str();
        std::cout << var;
        oss.str("");
        oss.clear(); 

        roomObject->set_humidity(targetHumidity);
        oss << "Humidity in the "<< roomObject->name() << "  is now adjusted to: " << roomObject->get_humidity() << "%" << std::endl;
        var = oss.str();
        std::cout << var;
        oss.str("");
        oss.clear(); 
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

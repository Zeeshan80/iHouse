#include "include/heatSensor.hpp"  
	
void heatSensor::sensorThread()
{
  std::ostringstream oss;
  oss << "The Temperature Sensor for the " << roomObject->name() << " with a target temperaturee of: "<< targetTemperature << " degrees celcius is now turned on" << std::endl;//make string then write
  std::string var = oss.str();
  std::cout<< var; 
  oss.str("");
  oss.clear();  
  while(sensorOn)
  {
    if(roomObject->get_temp() < targetTemperature-3 || roomObject->get_temp() > targetTemperature+3)
    {
    
      oss<< "Temperature is out of allowed range, the temperature in the "<< roomObject->name() <<  " is: " << roomObject->get_temp() <<" degrees celcius" << std::endl;
      var = oss.str();
      std::cout << var;
      oss.str("");
      oss.clear();
      
  
      roomObject->set_temp(targetTemperature);
      oss << "Temperature in the " << roomObject->name() << "  is now adjusted to: " << roomObject->get_temp()<<" degrees celcius" << std::endl;
      var = oss.str();
      std::cout << var;
      oss.str("");
      oss.clear(); 
   }
    std::this_thread::sleep_for(std::chrono::seconds(5));
  }
  std::cout<< "Sensor is turned of" << std::endl;
}

void heatSensor::enableSensorThread()
{
    sensorOn=true;
}


void heatSensor::disableSensorThread()
{
   sensorOn=false; 
}

void heatSensor::set_targetTemperature(unsigned int newTemp)
{
  targetTemperature=newTemp;
}

int heatSensor::get_Temp()
{
  return roomObject->get_temp();
}

heatSensor::heatSensor(unsigned int targetTemp, room* room, bool state)
{
  targetTemperature = targetTemp;
  roomObject = room;
  sensorOn=state;
}

void heatSensor::set_newRoom(room* room)
{
  roomObject = room;
}


heatSensor::heatSensor(){}
	
heatSensor::~heatSensor(){}
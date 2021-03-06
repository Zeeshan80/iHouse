#include "include/heatSensorBathroom.hpp"  
	
void heatSensorBathroom::sensorThread()
{
    std::cout<< "Sensor is turned on" << std::endl;
  while(sensorOn)
  {
    if(roomTemperature->get_temp() < setPoint-3 || roomTemperature->get_temp() > setPoint+3) // adding a +3 temp range.
    {
      std::cout << "Temperature is out of allowed range, the temperature in the "<< (typeid(*roomTemperature).name()) <<  " is: " << roomTemperature->get_temp() << std::endl;
      roomTemperature->set_temp(setPoint);// can add a temp sensor which gradually increased temp with +1+1+1+1 per cycle.
           std::cout << "Temperature is now adjusted to: " << roomTemperature->get_temp() << std::endl;
    }
    else{
        std::cout << "Temperature is within allowed range of: " << setPoint << " +- 3. The temperature is: " << roomTemperature->get_temp() << std::endl;
    }
    //wait time for sensor before checking temperature again
    std::this_thread::sleep_for(std::chrono::seconds(5));
  }
  std::cout<< "Sensor is turned of" << std::endl;
}

void heatSensorBathroom::enableSensorThread()
{
    sensorOn=true;
   //std::thread readSensor(&sensorThread, this); //problem here

}


void heatSensorBathroom::disableSensorThread()
{
   sensorOn=false; 
}

void heatSensorBathroom::set_setPointTemp(unsigned int newTemp)
{
  setPoint=newTemp;
}

int heatSensorBathroom::get_Temp()
{
  return roomTemperature->get_temp();
}

heatSensorBathroom::heatSensorBathroom(unsigned int targetTemp, bathroom* bathroom)
{
  setPoint = targetTemp;
  roomTemperature = bathroom;
}

void heatSensorBathroom::set_newRoom(bathroom* bathroom)
{
  roomTemperature = bathroom;
}


heatSensorBathroom::heatSensorBathroom(){}
	
heatSensorBathroom::~heatSensorBathroom(){}
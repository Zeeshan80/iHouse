#include "include/lightSensorTest.hpp"  
	
void lightSensorTest::sensorThread()
{
    std::cout<< "Sensor is turned on" << std::endl;
  while(sensorOn)
  {
    if(temperature < setPoint-3 || temperature > setPoint+3) // adding a +3 temp range.
    {
      std::cout << "Temperature is out of allowed range, the temperature in the room is: " << temperature << std::endl;
      temperature = setPoint;// can add a temp sensor which gradually increased temp with +1+1+1+1 per cycle.
           std::cout << "Temperature is now adjusted to: " << temperature << std::endl;
    }
    else{
        std::cout << "Temperature is within allowed range of: " << setPoint << " +- 3. The temperature is: " << temperature << std::endl;
    }
    //wait time for sensor before checking temperature again
    std::this_thread::sleep_for(std::chrono::seconds(5));
  }
  std::cout<< "Sensor is turned of" << std::endl;
}

void lightSensorTest::enableSensorThread()
{
    sensorOn=true;
   //std::thread readSensor(&sensorThread, this); //problem here

}


void lightSensorTest::disableSensorThread()
{
   sensorOn=false; 
}

void lightSensorTest::set_Temp(unsigned int newTemp)
{
  temperature=newTemp;
}

int lightSensorTest::get_Temp()
{
  return temperature;
}








lightSensorTest::lightSensorTest()
{
	
}
	
lightSensorTest::~lightSensorTest()
{
	
}
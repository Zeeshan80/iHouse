// Institution: University of SouthEast Norway
// Subject: PIOP21-1 21V Object Oriented Programming
// Lecturers: Olaf Hallan Graven & Joakim Bjørk
// Date: 15.02.2021 - 16.03.2021
// Project in OOP-C ++ by Jonathan Van Garling Senning & Zeeshan Aslam
// Task name: iHouse (SmartHus)
/*  
   Task description: iHouse (SmartHus)
   In this assignment you will create a control system for a smart home, as well as simulate the use of this system.
   It is up to the project team to create a detailed specification of the task. 
   Possible things to create in the system are:
        - Add room
        - Light (off / on / dim / light meter outside / inside)
        - Heat
        - Door locks
        - Home Appliances
        - Alarms / Automatic coffee in the morning
        - Tracking whether there are people in a room.
    The system should be implemented using threads.
    One possible extension is to create a simple graphical user interface.
    It is important that the work with a graphical user interface does not go
    beyond the function of the system (does not become the main part of the task)

*/


#include "iostream"
#include "include/Sensors.hpp"
#include "include/SoundSensor.hpp"

void myFunction();

int main(){ 
    SoundSensor objSoundSensor;
    Sensors* objSensors = &objSoundSensor;

    srand((int)time(0));
    int myRandomValue = (rand() % 10) + 1;
    int *myRandomPointerValue = &myRandomValue;
    std::cout << std::endl;    
    objSoundSensor.setValue( *myRandomPointerValue);
    std::cout << "Det skrives ut " << objSoundSensor.getValue() << std::endl;
    std::cout << std::endl;

    // objSensors->Init();
    // objSensors->Write();
    // objSensors->Read();
    
    return 0;
}




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

// Different classes
#include "include/Sensors.hpp"
#include "include/LightSensor.hpp"
#include "include/MotionSensor.hpp"
#include "include/SoundSensor.hpp"
#include "include/TemperaturSensor.hpp"
// Local libraries
#include "iostream"
#include <iomanip>
#include "ctime"

int main(){ 
    // Oject for each sensor/sub-class
    LightSensor ObjectLight;
    MotionSensor ObjectMotion;
    SoundSensor ObjectSound;
    TemperaturSensor ObjectTemp;
    // Logic based on each sensor and its purpose
    srand((int)time(0));
    int myRandomLightValue = (rand() % 20) + 1; 
    int myRandomMotionValue = (rand() % 1) + 1;
    int myRandomSoundValue = (rand() % 10) + 1;
    int myRandomTempValue = (rand() % 40) + 1;
    ObjectLight.setLight(myRandomLightValue);
    ObjectMotion.setMotion(myRandomMotionValue);
    ObjectSound.setSound(myRandomSoundValue);
    ObjectTemp.setTemp(myRandomTempValue);
    std::cout << std::endl; 
    std::cout << std::endl; 
    std::cout << " ----------- iHOUSE ----------- " << std::endl;
    // print various components of tm structure.    
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << std::endl; 
    std::cout << "Year: " << 1900 + ltm->tm_year << std::endl;
    std::cout << "Month: " << 1 + ltm->tm_mon << std::endl;
    std::cout << "Day: " << ltm->tm_mday << std::endl;
    std::cout << "Time: " << ltm->tm_hour <<  ":";
    std::cout << ltm->tm_min << ":";
    std::cout << ltm->tm_sec << std::endl; 
    std::cout << std::endl;
    std::cout << std::boolalpha;
    ObjectMotion.printMotionSensor();
    std::cout << std::endl; 
    ObjectLight.printLightSensor();
    std::cout << std::endl; 
    ObjectSound.printSoundSensor();
    std::cout << std::endl; 
    ObjectTemp.printTempSensor();
    std::cout << std::endl; 
    std::cout << std::endl; 

    return 0;
}



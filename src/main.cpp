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
#include "include/BathRoom.hpp"
#include "include/Kitchen.hpp"
#include "include/LivingRoom.hpp"
#include "include/SleepingRoom.hpp"
// Local libraries
#include "iostream"
#include <iomanip>
#include <ostream>
#include "ctime"

int main(){ 
    // Oject for each sensor/sub-class
    LightSensor ObjectLight;
    MotionSensor ObjectMotion;
    SoundSensor ObjectSound;
    TemperaturSensor ObjectTemp;
    BathRoom ObjectBathRoom;
    Kitchen ObjectKitchen;
    LivingRoom ObjectLivingRoom;
    SleepingRoom ObjectSleepingRoom;
    // Logic based on each sensor and its purpose
    srand((int)time(0));
    int myRandomLightValue = (rand() % 20 + 1); 
    int myRandomMotionValue = (rand() % 1 + 1);
    int myRandomSoundValue = (rand() % 10 + 1);
    int myRandomTempValue = (rand() % 40 + 1);
    ObjectLight.setLight(myRandomLightValue);
    ObjectMotion.setMotion(myRandomMotionValue);
    ObjectSound.setSound(myRandomSoundValue);
    ObjectTemp.setTemp(myRandomTempValue);
    // Logic based on each room and its purpose
    int myRandomRoomSelection =  (rand() % 4 + 1);
/* 
    if (myRandomRoomSelection == 1) {
        int* myBathRoomPointer = &myRandomRoomSelection; 
        int myBathRoom = *myBathRoomPointer;
        ObjectBathRoom.setBathRoom(myBathRoom);
    }
     
    else if (myRandomRoomSelection == 2) {
        int* myKitchenPointer = &myRandomRoomSelection; 
        int myKitchen = *myKitchenPointer; 
        ObjectKitchen.setKitchen(myKitchen);
    }
    else if (myRandomRoomSelection == 3) {
        int* myLivingRoomPointer = &myRandomRoomSelection;
        int myLivingRoom = *myLivingRoomPointer;
        ObjectLivingRoom.setLivingRoom(myLivingRoom);
    }

    else if (myRandomRoomSelection == 4) {
        int* mySleepingRoomPointer = &myRandomRoomSelection; 
        int mySleepingRoom = *mySleepingRoomPointer;        
        ObjectSleepingRoom.setSleepingRoom(mySleepingRoom);
    } */
int myBathRoom;
int myKitchen;
int myLivingRoom;
int mySleepingRoom;

switch (myRandomRoomSelection) {
    case 1:
        myBathRoom = myRandomRoomSelection;  
        ObjectBathRoom.setBathRoom(myBathRoom);
    break;
    
    case 2:     
        myKitchen  = myRandomRoomSelection; 
        ObjectKitchen.setKitchen(myKitchen);
    break;

    case 3:
        myLivingRoom = myRandomRoomSelection;
        ObjectLivingRoom.setLivingRoom(myLivingRoom);
    break;
    
    case 4:
        mySleepingRoom = myRandomRoomSelection;      
        ObjectSleepingRoom.setSleepingRoom(mySleepingRoom);
    break;
}




    // from this section and down you will have the outputs for compilare
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
    ObjectBathRoom.printBathRoom();
    ObjectKitchen.printKitchen();
    ObjectLivingRoom.printLivinRoom();
    ObjectSleepingRoom.printSleepingRoom();
    std::cout << ObjectBathRoom.getBathRoom() << std::endl;
    std::cout << ObjectKitchen.getKitchen() << std::endl;
    std::cout << ObjectLivingRoom.getLivingRoom() << std::endl;
    std::cout << ObjectSleepingRoom.getSleepingRoom() << std::endl;
    std::cout << std::endl; 
    ObjectLight.printLightSensor();
    std::cout << std::endl; 
    ObjectSound.printSoundSensor();
    std::cout << std::endl; 
    ObjectTemp.printTempSensor();
    std::cout << std::endl; 
    
    return 0;
}



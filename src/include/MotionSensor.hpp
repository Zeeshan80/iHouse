#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#pragma once
#include <thread>
#include <iostream>
#include "bathroom.hpp"
#include "bedroom.hpp"
#include "Kitchen.hpp"
#include "LivingRoom.hpp"

//fikse lyssensor?

#include <typeinfo>
#include <sstream>

class MotionSensor  {
	protected:
		// Variables
		int MotionValue; // how long the sensor stays "on"
		bool MotionState;// if person is in room
		room* roomObject;
		int countdown; //countdown for turning the motion sensor "of"
		bool activated; //Variable to get for light to see if it should be on
		bool sensOn; // enable/disable sensor thread




	public:
		// Constructur & Destructur
		MotionSensor(int timer, room* room, bool state);
		MotionSensor();
		~MotionSensor();

		//changing room
		void set_newRoom(room* room); //to be used if you for some reason need to change the room the sensor is in
		
		//sensor methods
		void sensorThread();
		void enableSensorThread();
		void disableSensorThread();

		//set and get for how long the motionsensor keeps the circuit connected on
		void setMotionTime(int value);
		int getMotionTime();

		bool checkMotionState();
		void printMotionSensor();
		bool getActivated();
};
#endif
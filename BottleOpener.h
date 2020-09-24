#ifndef BOTTLE_OPENER_H
#define BOTTLE_OPENER_H

#include <Servo.h>

class BottleOpener {

	private:
		//Vacuum pin adress
		const int VACUUM_PUMP = 1234;
		
		const Servo OPENER_SERVO = 1234;
		const float START_DEGREE = 1234, END_DEGREE = 1234;

	public:
		BottleOpener() = default;
		~BottleOpener() = default;

		bool OpenBottle();
		bool CloseBottle();
};

#endif
#ifndef BOTTLE_POURER_H
#define BOTTLE_POURER_H

#include <Servo.h>

class BottlePourer {
	
	private:
		const Servo POURER_SERVO = 1234;
		const float START_DEGREE = 1234, END_DEGREE = 1234;

	public:
		BottlePourer() = default;
		~BottlePourer() = default;

		bool PoorBootle();
};

#endif
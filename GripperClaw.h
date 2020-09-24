#ifndef GRIPPER_CLAW_H
#define GRIPPER_CLAW_H

#include <Servo.h>

class GripperClaw {

	private:
		const Servo GRIP_SERVO = 1234;
		const float START_DEGREE = 1234, END_DEGREE = 1234;

	public:
		GripperClaw() = default;
		~GripperClaw() = default;

		bool OpenClaw();
		bool CloseClaw();
};

#endif
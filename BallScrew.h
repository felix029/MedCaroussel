#ifndef BALL_SCREW_H
#define BALL_SCREW_H

#include <Stepper.h>

class BallScrew {

	private:
		const Stepper BALL_SCREW_STEPPER = 1234;
		const float STEP_DEGREE = 1.5, MIN_HEIGHT = 1234, MAX_HEIGHT = 1234;

	public:
		BallScrew() = default;
		~BallScrew() = default;

		bool MoveUp();
		bool MoveDown();
};

#endif
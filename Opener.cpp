#include "Opener.h"

Opener::Opener() {

	gripperClaw		= new GripperClaw();
	ballScrew		= new BallScrew();
	bottleOpener	= new BottleOpener();
	bottlePourer	= new BottlePourer();
}

bool Opener::OpenSequence() {

  return true;
}

bool Opener::CloseSequence() {

  return true;
}

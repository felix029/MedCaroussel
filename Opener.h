#ifndef OPENER_H
#define OPENER_H

#include "GripperClaw.h"
#include "BallScrew.h"
#include "BottleOpener.h"
#include "BottlePourer.h"

class Opener {

  private:
    //Here is declared the objects that will be used by the Opener to complete it's task
    GripperClaw   gripperClaw;
    BallScrew     ballScrew;
    BottleOpener  bottleOpener;
    BottlePourer  bottlePourer;

  public:
    //Constructor & destructor  
    Opener();
    ~Opener() = default;

    //Open & close methods, return TRUE when complete
    bool OpenSequence();
    bool CloseSequence();
 
};

#endif
#ifndef DISPENSER_H
#define DISPENSER_H

#include <Servo.h>

class Dispenser {

  private:
    //Here is declared the constants representing the Servo and the starting and ending degree position of it
    const Servo DISPENSER_SERVO = 1234;
    const float START_DEGREE = 1234, END_DEGREE = 1234;

  public:
    //Constructor & destructor  
    Dispenser() = default;
    ~Dispenser() = default;

    //Dispense method that returns TRUE when complete
    bool Dispense();
 
};

#endif
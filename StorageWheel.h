#ifndef STORAGE_WHEEL_H
#define STORAGE_WHEEL_H

#include <Stepper.h>
#include <vector>
#include <string>
#include "Medication.h"

class StorageWheel {

  private:
    //Here is defined the constants representing the Servo and the starting and ending degree position of it
    const Stepper WHEEL_STEPPER = 1234;
    const int NB_OF_SLOTS = 8;
	const float STEP_DEGREE = 1.5;

    int slotUnderFunnel, slotOverDispense, nbSlotsUsed;
    std::vector<Medication> medications;

    //Private method to check if all slots are full
    bool isFull();

  public:
    //Constructor & destructor  
    StorageWheel() = default;
    ~StorageWheel() = default;

    //Dispense method that returns TRUE when complete
    bool AddMedication(std::string medName, int qty);
    bool DeleteMedication(std::string medName, int qty);
    bool RotateToRefillMed(std::string medName);
    bool RotateToDispenseMed(std::string medName);
 
};

#endif
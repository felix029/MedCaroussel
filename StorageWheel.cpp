#include "StorageWheel.h"

//This method checks if there is an available slot with no medication in it, returns TRUE if full and FALSE if not
bool StorageWheel::isFull() {

  return nbSlotsUsed == NB_OF_SLOTS;
}

//Add some medication to a slot with a provided name and quantity
bool StorageWheel::AddMedication(std::string medName, int qty) {

  return true;
}

//Delete the medicine which name is provided
//This function is used after a med is dispensed and removed the right amount of pills to the med
//Default qty is set to 0 so when this function is called without the qty parameter, this means the medication slot is empty and the Medication object can be deleted from the vector
bool StorageWheel::DeleteMedication(std::string medName, int qty = 0) {

  return true;
}

bool StorageWheel::RotateToRefillMed(std::string medName) {

  return true;
}

bool StorageWheel::RotateToDispenseMed(std::string medName) {

  return true;
}

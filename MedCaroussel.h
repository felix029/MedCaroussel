#ifndef MED_CAROUSSEL_H
#define MED_CAROUSSEL_H

#include "Opener.h"
#include "StorageWheel.h"
#include "Dispenser.h"

class MedCaroussel {

  private:
    //Here are defined the different components of the MedCaroussel
    Opener opener;
    StorageWheel storageWheel;
    Dispenser dispenser;

  public:
    //Constructor & destructor  
    MedCaroussel();
    ~MedCaroussel() = default;

    //Sequence methods
    void AddMedication();
    void DispenseMedication();
  
};

#endif
#ifndef MEDICATION_H
#define MEDICATION_H

#include <string>

class Medication {

  private:
    int slotUsed, quantity;
    std::string medName;

  public:

    //Constructor & destructor
    Medication(int nb, int qty, std::string medName);
    ~Medication() = default;

    //Getters
    int GetSlotUsed();
    int GetQuantity();
    std::string GetMedName();

    //Setters
    void SetSlotUsed(int nb);
    void SetQuantity(int qty);
    void SetMedName(std::string medName);
}

#endif
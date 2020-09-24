#include "Medication.h"

Medication::Medication(int nb, int qty, std::string medName) {

  slotUsed  = nb;
  quantity  = qty;
  medName   = medName;
}

//Getters
int Medication::GetSlotUsed() {

  return slotUsed;
}

int Medication::GetQuantity() {

  return quantity;
}

std::string Medication::GetMedName() {

  return medName;
}

//Setters
void Medication::SetSlotUsed(int nb) {

  slotUsed = nb;
}

void Medication::SetQuantity(int qty) {

  quantity = qty;
}

void Medication::SetMedName(std::string medName) {

  medName = medName;
}

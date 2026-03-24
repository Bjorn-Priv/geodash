#include "../inc/entities.h"

Mage::Mage() {
  super = "Mage";
  level = 0;
  stats = statLine(10, 5, 6, 12, 0, 3, 7);
}

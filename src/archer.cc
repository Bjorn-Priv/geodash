#include "../inc/entities.h"

Archer::Archer() {
  super = "Archer";
  level = 0;
  stats = statLine(10, 8, 10, 5, 0, 5, 5);
}
#include "../inc/entities.h"

Swordsman::Swordsman() {
  super = "Swordsman";
  level = 0;
  stats = statLine(10, 12, 8, 3, 0, 7, 3);
}
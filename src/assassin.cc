#include "../inc/entities.h"

Assassin::Assassin() {
  super = "Assassin";
  level = 0;
  stats = statLine(10, 7, 13, 3, 0, 6, 4); 
}
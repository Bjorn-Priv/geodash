#include "../inc/entity.h"

void Entity::print(std::ostream& os) {
  os << "Level " << level << " " << super << "\n";
  stats.printStats(os);
     
}
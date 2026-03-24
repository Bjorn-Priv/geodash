#ifndef ARCHER_H
#define ARCHER_H

#include "entity.h"
#include <vector>

class Archer : public Entity {
    /*
      can gain abilities which you can use to attack or defend 
    
    
    */

  public:
    Archer();
    void performAction(u_int8_t ){};
    ~Archer(){};
};
#endif
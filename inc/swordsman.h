#ifndef SWORDSMAN_H
#define SWORDSMAN_H

#include "entity.h"
#include <vector>

class Swordsman : public Entity {

    
    /*
      can gain abilities which you can use to attack or defend 
    
    
    */

  public:
    Swordsman();
    void performAction(u_int8_t ){};
    ~Swordsman(){};
};

#endif
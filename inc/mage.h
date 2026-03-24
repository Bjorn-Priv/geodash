#ifndef MAGE_H
#define MAGE_H

#include "entity.h"
#include <vector>

class Mage : public Entity {
  private:

    /*
      can gain abilities which you can use to attack or defend 
    
    
    */

  public:
    Mage();
    void performAction(u_int8_t ){};
    ~Mage(){};
};

#endif
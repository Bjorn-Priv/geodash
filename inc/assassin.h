#ifndef ASSASSIN_H
#define ASSASSIN_H

#include "entity.h"
#include <vector>

class Assassin : public Entity {
  private:


    /*
      can gain abilities which you can use to attack or defend 
    
    
    */

  public:
    Assassin();
    void performAction(u_int8_t ){};
    ~Assassin(){};
};
#endif

#ifndef ENTITY_H
#define ENTITY_H

#include <cstdlib>
#include <iostream>
#include <algorithm>

class Entity {
  protected:
    struct statLine {
      statLine(int health, int strength, int dexterity,
                int mana,  int luck,   int phy_d,    int mag_d) :
                hp(health), str(strength), dex(dexterity),
                mana(mana), luck(luck), phy_d(phy_d), mag_d(mag_d) {
        //highest value tournament
        digits = std::to_string(std::max({hp, str, dex, mana, luck, phy_d, mag_d})).length();
      }

      statLine() : hp(0), str(0), dex(0), mana(0), 
                  luck(0), phy_d(0), mag_d(0), digits(1) {}

      void printStats(std::ostream& os = std::cout) {
        os << "|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";
        for (int i = 0; i < digits; i++) os << "‾";
        os << "|\n";
        os << "| Stats:        ";
        for (int i = 0; i < digits; i++) os << " ";
        os << " |\n"
           << "| - " << "Health    -"; printInteger(hp, os); os << "- |\n"
           << "| - " << "Strength  -"; printInteger(str, os); os << "- |\n"
           << "| - " << "Dexterity -"; printInteger(dex, os); os << "- |\n" //4 + 11 + digits + 2
           << "| - " << "Mana      -"; printInteger(mana, os); os << "- |\n"
           << "| - " << "Luck      -"; printInteger(luck, os); os << "- |\n"
           << "|   " << "------------";
           for (int i = 0; i < digits; i++) os << "-";
           os << " |\n"
           << "| - " << "Phys Def  -"; printInteger(phy_d, os); os << "- |\n"
           << "| - " << "Mag Def   -"; printInteger(mag_d, os); os << "- |\n"
           << "|________________";
        for (int i = 0; i < digits; i++) os << "_";
        os << "|\n";
      }



      private:
        //main stats
        int hp;
        int str;
        int dex;
        int mana;
        int luck;
        
        //defenses
        int phy_d;
        int mag_d;

        //for printing
        int digits;

        void printInteger(int stat, std::ostream& os) {
          int diff = digits - std::to_string(stat).length();
          if (diff > 0) {
            while(diff > 0) {
              os << " ";
              diff--;
            }
          }
          os << stat;
        }
    };
    statLine stats;
    int level;

    //name
    std::string super; 

    /*
      can gain abilities which you can use to attack or defend 
    
    
    */

  public:
    Entity() = default;
    void print(std::ostream& os = std::cout); 
    virtual void performAction(u_int8_t ) = 0;
    virtual ~Entity(){};
};

#endif
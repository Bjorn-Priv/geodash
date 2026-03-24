#include <iostream>
#include <memory>
#include "inc/entities.h"
#include "inc/constants.h"

//validates if the input is correct
bool validInput(const std::string& in) {
  return in.size() == 1 && in[0] >= MINCLASS && in[0] <= MAXCLASS;
}

//prints available classes to ostream os
//default is std::cout 
void printClasses(std::ostream& os = std::cout) {
  os << "Choose your class...\n"
     << "1. Swordsman \n"
     << "2. Archer \n"
     << "3. Mage \n"
     << "4. Assassin \n";  
}

//returns new entity pointer with correct class based on input char o
//1: swordsman
//2: archer
//3: mage
//4: assassin
//else nullptr
std::unique_ptr<Entity> createClass(const char o) {
  switch (o) {
    case '1': return std::make_unique<Swordsman>();
    case '2': return std::make_unique<Archer>();
    case '3': return std::make_unique<Mage>();
    case '4': return std::make_unique<Assassin>();
    default : return nullptr;
  } 
}

int main() {
  std::unique_ptr<Entity> player;

  std::string input = "";

  printClasses();

  while (true) {
    getline(std::cin, input);
    if (validInput(input)) break;
    std::cout << "\nPick a valid class!\n";
    printClasses();
  } //while

  player = createClass(input[0]);
  
  player->print();
}
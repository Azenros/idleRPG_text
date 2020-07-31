#include "includes.h"
#include "characters.h"


int main() {
  Player p(10, "bob", 1, 0);
  Monster m(15, "slime", 2, 8, 1);


  std::cout << "Test:\n";
  std::cout << "player: " << p.getName() << ": "<< p.getHP() << " HP, " << p.getAtk() <<" Atk, " << p.getDef() << " Def, ";
  std::cout << std::endl;
  std::cout << "mob: " << m.getName() << ": "<< m.getHP() << " HP, " << m.getAtk() <<" Atk, " << m.getDef() << " Def, ";

  
}
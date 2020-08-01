#include "includes.h"
#include "characters.h"

void printStats(Entity e) {
  std::cout << std::endl
            << e.getName() << ":\n__________________\n\n"
            << "Level " << e.getLvl() << std::endl
            << "EXP: " << e.getExp() << std::endl
            << "HP: " << e.getHP() << " / " << e.getMaxHP() << std::endl
            << "ATK: " << e.getAtk() << std::endl
            << "DEF: " << e.getDef() << std::endl
            << std::endl;
}

int main() {
  Player p(10, "bob", 1, 0);
  Monster m(15, "slime", 2, 8, 1);


  std::cout << "Test:\n";
  std::cout << "player: " << p.getName() << ": "<< p.getHP() << " HP, " << p.getAtk() <<" Atk, " << p.getDef() << " Def\n";
  std::cout << std::endl;
  std::cout << "mob: " << m.getName() << ": "<< m.getHP() << " HP, " << m.getAtk() <<" Atk, " << m.getDef() << " Def\n";

  std::cout << "Test2:\n";
  printStats(p);
  printStats(m);

  
}
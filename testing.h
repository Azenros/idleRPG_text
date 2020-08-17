#ifndef TESTING_H
#define TESTING_H

#include "includes.h"
#include "characters.h"

std::string line = "__________________";
std::string space = "                  ";
<<<<<<< HEAD

void printChar(int i, char c) {
  for (int k = 0; k < i; k++) {
    std::cout << c;
  }
}
=======
>>>>>>> 7461e614308bdd47e14ebcd23a59ce85d6c4fc91

struct Testing {

  void printEntStats (Entity e) { //print basic parameters
    std::cout << std::endl
            << e.getName() << ":\n" << line << "\n\n"
            << "Level " << e.getLvl() << std::endl
            << "EXP: " << e.getExp() << std::endl
            << "HP: " << e.getHP() << " / " << e.getMaxHP() << std::endl
            << "ATK: " << e.getAtk() << std::endl
            << "DEF: " << e.getDef() << std::endl
            << std::endl;

  };

  void printPlayerStats (Player p) {
    //Prints out player specific parameters
    //Requires test1 to succeed
    printEntStats(p);
    std::cout << "To Next Level: " << p.getNext() << std::endl
              << "Gold: " << p.getGold() << std::endl
              << std::endl << line << std::endl;

  };

  void printMobStats (Monster m) {
    //Prints out monster specific parameters
    //Requires test1 to succeed.
    printEntStats(m);
    std::cout << "Gold on Kill: " << m.getGold()
              << std::endl << line << std::endl;

  };

  void twinStats(Player p, Monster m) {
    //Prints stats of player and mob on same lines
    //Adapts to length of names
    int position = (p.getName().size() + 1) + 7;
    int spaces = 0;

    //names
    spaces = position - (p.getName().size() + 1);

    std::cout << std::endl << p.getName() << ":";
    printChar(spaces, ' ');
    std::cout << m.getName() << ":\n";

    //line
    printChar(position + m.getName().size() + 2, '_');
    std::cout << std::endl << std::endl;
    
    //level
    std::string lvlstr = std::to_string(p.getLvl());
    spaces = position - (6 + lvlstr.size());

    std::cout << "Level " << lvlstr;
    printChar(spaces, ' ');
    std::cout << "Level " << m.getLvl() << std::endl;

    //EXP
    std::string curExp = std::to_string(p.getExp());
    std::string nextExp = std::to_string(p.getNext());
    spaces = position - (8 + curExp.size() + nextExp.size());

    std::cout << "EXP: " << p.getExp() << " / " << p.getNext();
    printChar(spaces, ' '); 
    std::cout << "EXP: " << m.getExp() << std::endl;

    //HP
    std::string curHP = std::to_string(p.getHP());
    std::string maxHP = std::to_string(p.getMaxHP());
    spaces = position - (7 + curHP.size() + maxHP.size());

    std::cout << "HP: " << p.getHP() << " / " << p.getMaxHP();
    printChar(spaces, ' ');
    std::cout << "HP: " << m.getHP() << " / " << m.getMaxHP() << std::endl;

    //ATK
    std::string atk = std::to_string(p.getAtk());
    spaces = position - (5 + atk.size());

    std::cout << "ATK: " << p.getAtk();
    printChar(spaces, ' ');
    std::cout << "ATK: " << m.getAtk() << std::endl;

    //DEF
    std::string def = std::to_string(p.getDef());
    spaces = position - (5 + atk.size());

    std::cout << "DEF: " << p.getDef();
    printChar(spaces, ' ');
    std::cout << "DEF: " << m.getDef() << std::endl;

  }

};

#endif
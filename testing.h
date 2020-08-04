#ifndef TESTING_H
#define TESTING_H

#include "characters.h"

std::string line = "__________________\n"

struct Testing {

  void printEntStats (Entity e) { //print basic parameters
    std::cout << std::endl
            << e.getName() << ":\n" << line << "\n"
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
              << std::endl << line;

  };

  void printMobStats (Monster m) {
    //Prints out monster specific parameters
    //Requires test1 to succeed.
    printEntStats(m);
    std::cout << "Gold on Kill: " << m.getGold()
              << std::endl << line << std::endl;

  };

};

#endif
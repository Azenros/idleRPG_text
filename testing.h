#ifndef TESTING_H
#define TESTING_H

#include "characters.h"

std::string line = "__________________";
std::string space = "                  ";

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
    std::cout << std::endl
              << p.getName() << ":" << space << m.getName() << ":\n"
              << line << line << std::endl << std::endl
              << "Level " << p.getLvl() << space 
              << "Level " << m.getLvl() << std::endl
              << "EXP: " << p.getExp() << " / " << p.getNext() << space 
              << "EXP: " << m.getExp() << std::endl
              << "HP: " << p.getHP() << " / " << p.getMaxHP() << space
              << "HP: " << m.getHP() << " / " << m.getMaxHP() << std::endl
              << "ATK: " << p.getAtk() << space << "ATK: " << m.getAtk() << std::endl
              << "DEF: " << p.getDef() << space << "DEF: " << m.getDef() << std::endl;


  }

};

#endif
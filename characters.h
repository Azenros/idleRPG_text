#ifndef CHARACTERS_H
#define CHARACTERS_H

#include "includes.h"
#include "item.h"

class Entity {
  private:
    int health = 10; //hp
    int maxhealth = 10;
    std::string name = "Nameless";
    int attack = 0; //atk
    int defense = 0; //def

  protected:
    void setName(std::string s) { name = s; };
    void setHealth(int);
    void setAtk(int);
    void setDef(int);


  public:
    Entity(int i, std::string s, int a, int d) 
      : health(i), name(s), attack(a), defense(d) {};

    int getHP() { return health; };
    int getAtk() { return attack; };
    int getDef() {return defense; };
    std::string getName() { return name; };
    

};

class Player : public Entity {
  private:
    int money = 0;
  public:
    Player(int i, std::string s, int a, int d) 
      : Entity(i,s,a,d) {};

    int getMoney() { return money; };
    
};

class Monster : public Entity {
  protected:
    int moneyOnKill = 10;
  public:
    Monster(int i, std::string s, int a, int d) 
      : Entity(i,s,a,d) {}
    Monster(int i, std::string s, int a, int d, int m) 
      : Entity(i,s,a,d), moneyOnKill(m) {};

    int getMoney() { return moneyOnKill; };
};

#endif
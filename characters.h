#ifndef CHARACTERS_H
#define CHARACTERS_H

#include "includes.h"
#include "inventory.h"

//Experience points to next level.
std::vector<int> toNextLvl = {0, 1, 2, 4, 8, 16, 
                         32, 64, 128, 256, 
                         1024, 2048};

class Entity {
  private:
    int health = 10; //hp
    int maxhealth = 10;
    std::string name = "Nameless";
    int attack = 0; //atk
    int defense = 0; //def
    int level = 1; 
    //Total Exp for Players, Exp gained on kill for Monsters
    int expHeld = 0; 

  protected:
    void setName(std::string s) { name = s; };
    void setHealth(int h) { health = h; };
    void setMaxHP (int h) { maxhealth = h; };
    void setAtk(int a) { attack = a; };
    void setDef(int d) { defense = d; };
    void setLevel(int l) { level = l; };
    void setExp(int e) { expHeld = e; };

  public:
    Entity(int h, std::string s, int a, int d) 
      : health(h), maxhealth(h), name(s), attack(a), defense(d) {};

    int getHP() { return health; };
    int getMaxHP() { return maxhealth; };
    int getAtk() { return attack; };
    int getDef() { return defense; };
    int getLvl() { return level; };
    int getExp() { return expHeld; };
    std::string getName() { return name; };
    
};

class Player : public Entity {
  private:
    int gold = 0; //debating on whether to move this to the inventory
    int exptoNext = 1;

  public:
    Player(int i, std::string s, int a, int d) 
      : Entity(i,s,a,d) {};

    int getGold() { return gold; };
    int getNext() { return exptoNext; };
    void setGold(int m) { gold += m; };
    void addExp(int e) { setExp(getExp() + e); };

    void levelUp() {
      int l = getLvl();
      setLevel(l++);
      exptoNext = toNextLvl[l];
    } 
    
};

class Monster : public Entity {
  protected:
    int goldOnKill = 1;

  public:
    Monster(int i, std::string s, int a, int d) 
      : Entity(i,s,a,d) {}
    Monster(int i, std::string s, int a, int d, int m) 
      : Entity(i,s,a,d), goldOnKill(m) {};

    int getGold() { return goldOnKill; };
    
    void onDefeat(Player p) {
      p.setGold(goldOnKill);
      p.addExp(getExp());
      if (p.getExp() >= p.getNext()) {
        p.levelUp();
      }
    }
};

#endif
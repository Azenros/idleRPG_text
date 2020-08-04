
#include "includes.h"
#include "testing.h"
#include "characters.h"


int main() {

  Testing t;

  Player p(10, "Player 1", 1, 0);
  Monster m1(15, "Monster 1", 2, 8, 1);
  Monster m2(25, "Monster 2", 5, 10, 8);

  t.printPlayerStats(p);
  t.printMobStats(m1);
  t.printMobStats(m2);
  
}
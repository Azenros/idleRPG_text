
#include "includes.h"
#include "testing.h"
#include "characters.h"

int main() {

  Testing t;

  Player p("Player 1", 10, 1, 0);
  Monster m1("Monster 1", 15, 2, 8, 1);
  Monster m2("Monster 2", 25, 5, 10, 8);
  
  t.twinStats(p, m1); 
}
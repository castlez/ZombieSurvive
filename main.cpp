#include <iostream>
#include "dungeon.h"
using namespace std;

//local prototypes
bool game(dungeon d, player p); //game function returns true if player survived

int main(){
  dungeon dgn;
  player plr;
  if(game(dgn, plr))
    cout<<endl<<"you survived, you win!!"<<endl;
  else
    cout<<endl<<"you died, better luck next time!"<<endl;
  dgn.display();
  return 0;

}

//game function returns true if player survived
bool game(dungeon d, player p){
  d.spawn(p);

  system("clear");
  return true;
}




#include "room.h"
#include "player.h"
#include <stdlib.h>

class dungeon{
  public:
    dungeon();
    ~dungeon();
    void display(); //display wrapper
    void disp(room * cur, room * prev);  //displays recursively
    void spawn(player & p);
  private:
    room * entrance;

};

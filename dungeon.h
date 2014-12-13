#include "room.h"
#include "player.h"

class dungeon{
  public:
    dungeon();
    ~dungeon();
    void display(room * current);  //displays recursively
    void spawn(player & p);
  private:
    room * entrance;

};

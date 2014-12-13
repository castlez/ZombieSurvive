//ZOMBIE SURVIVE
//Jonny Castle
//
//interface for dungeon 
//acts as a manager for a collection
//of rooms aranged similar to a graph
//but with only four pointers (for each direction)
//

#include "room.h";

class dungeon(){
  public:
    dungeon();
    ~dungeon();
    void display(room * r);  //displays the dungeon recursively
    room * entrance;
}

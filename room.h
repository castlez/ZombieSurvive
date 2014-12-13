//ZOMBIE SURVIVE
//Jonny Castle
//
//Interface for the room class
//hold information about a single room
//of dynamic size and content
//

#include "mat.h"


class room{
  friend class dungeon;
  public:
    room();
    ~room();
  private:
    matrix *area;  //physical places in the room, arrange in a matrix
    char * description;  //simple description of the room
    //directions
    room * n;
    room * s;
    room * w;
    room * e;
};

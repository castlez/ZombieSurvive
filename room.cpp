#include "room.h"
#include <cstring>

room::room(){
  area = new matrix;
  area->populate(3,3); //TODO make random
  description = new char[10]; //TODO make random
  strcpy(description,"random description");
  n = NULL;
  s=NULL;
  e=NULL;
  w=NULL;
}

room::~room(){
}


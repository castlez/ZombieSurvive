//ZOMBIE SURVIVE
//Jonny Castle
//
//function implamentation for dungeon

#include "dungeon.h"

dungeon::dungeon(){
//for now just adds 4 rooms randomly together
  int added = 0; //counter for amount of rooms added
  int dir; //direction to add room(n=0, s=1, w=2, e=3)
  entrance = new room;
  room * here = entrance;
  while(added<4){     //TODO variable ammount of rooms
    dir = rand() % 4;
    cout << "dir is "<<dir;
    //if the direction is null, add a room there and increment added,
    //if its not move into that direction

    //north
    if(dir == 0){
      if(!here->n){
        here->n=new room;
        added++;
      }
      else{
        here = here->n;
      }
      continue;
    }
    //south
    if(dir == 1){
      if(!here->s){
        here->s=new room;
        added++;
      }
      else{
        here = here->s;
      }
      continue;
    }
    //west
    if(dir == 2){
      if(!here->w){
        here->w=new room;
        added++;
      }
      else{
        here = here->w;
      }
      continue;
    }

    //east
    if(dir == 3){
      if(!here->e){
        here->e=new room;
        added++;
      }
      else{
        here = here->e;
      }
      continue;
    }
  }

}
dungeon::~dungeon(){
}
void dungeon::display(){
  room * cur = entrance;
  room * prev = entrance;
  disp(cur, prev);
}
//TODO temporarily iterative for testing purposes
void dungeon::disp(room * cur, room * prev){
 
  /*
  if(!cur) return;
  
  if(cur->n && cur->n!=prev){
    disp(cur->n, cur);
    cout<<"n"<<endl;
    cur->area->display();
  }

  if(cur->s&& cur->s!=prev){
    cur->area->display();
    cout<<"s"<<endl;
    disp(cur->s, cur);
  }

  if(cur->w&& cur->w!=prev){
    disp(cur->w, cur);
    cout<<"  w ";
    cur->area->display();
  
  }
  if(cur->e&& cur->e!=prev){
    cur->area->display();
    cout<<"   e";
    disp(cur->e, cur);
  }

  return;
  */
}
void dungeon::spawn(player & p){
}


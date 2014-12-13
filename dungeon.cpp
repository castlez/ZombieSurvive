//ZOMBIE SURVIVE
//Jonny Castle
//
//function implamentation for dungeon

#include "dungeon.h"


dungeon::dungeon(){
//for now just adds 4 rooms randomly together
  int added = 0; //counter for amount of rooms added
  int dir = 0; //direction to add room(n=0, s=1, w=2, e=3)
  entrance = new room;
  room * here = entrance;
  while(added<4){
    dir = rand()%4;
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
    }
    //south
    if(dir == 1){
      if(!here->s){
        here->n=new room;
        added++;
      }
      else{
        here = here->s;
      }
    }
    //west
    if(dir == 2){
      if(!here->w){
        here->n=new room;
        added++;
      }
      else{
        here = here->w;
      }
    }
    //east
    if(dir == 3){
      if(!here->e){
        here->n=new room;
        added++;
      }
      else{
        here = here->e;
      }
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
  
 
  cout<<endl<<"n"<<endl;
  while(cur){
    cur->area->display();
    cur=cur->n;
    cout<<endl<<endl;
  }
  cout<<endl<<"s"<<endl;
  cur = entrance;

  while(cur){
    cur->area->display();
    cur=cur->s;
    cout<<endl<<endl;
  } 
  cout<<endl<<"e"<<endl;
  cur = entrance;

  while(cur){
    cur->area->display();
    cur=cur->e;
    cout<<endl<<endl;
  }
  cout<<endl<<"w"<<endl;
  cur = entrance;

  while(cur){
    cur->area->display();
    cur=cur->w;
    cout<<endl<<endl;
  }
  
  
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


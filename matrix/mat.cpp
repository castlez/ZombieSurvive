//Jonathan Castle
//matrix manager implementation
#include "mat.h"

matrix::matrix(){
    
}

void matrix::populate(int c, int r){
  array = new int*[c];
  column = c;
  row = r;
  int x=0;
  for(int i = 0; i < column; ++i)
       array[i] = new int[row];
  for(int i=0; i<column; i++){
    for(int j=0; j<row; j++){
      array[j][i] = 0;
      x++;
    }
  }
}

void matrix::place(int c, int r, int toadd){
  array[c][r] = toadd;
}

void matrix::display(){
  int max = array[column-1][row-1];
  for(int i=0; i<column; i++){
    for(int j=0; j<row; j++){
      display_one(array[j][i], max);
      cout<<' ';
    }
    cout<<endl;
  }
}

int matrix::numDigits(int check){
  if(check<10 && check>0){
    return 1;
  }
  else if(check<100){
    return 2;
  }
  else if(check<1000){
    return 3;
  }
  else if(check<10000){
    return 4;
  }
}

void matrix::display_one(int to_display, int max){
  int addz;
  if(to_display==0){
    addz=numDigits(max)-1;
  }
  else{
    addz=numDigits(max)-numDigits(to_display);

  }
  if(addz==0){
    cout<<to_display;
    return;
  }
  for(int i=0; i<addz; i++){
    cout<<'0';
  }
  cout<<to_display;
}

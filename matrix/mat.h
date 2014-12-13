//Jonathan Castle
//simple matrix manager interface
//only outfitted to populate a list of
//sequential integers
#include<iostream>
using namespace std;


class matrix{
  public:
    matrix();
    void populate(int c, int r);
    void display();
    void display_one(int to_display, int max);
    void place(int c, int r, int toadd);
    int numDigits(int check);
  private:
    int column, row;
    int ** array;
};

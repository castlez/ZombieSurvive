//ZOMBIE SURVIVE
//Jonny Castle
//
//Interface for a character
//holds all information about
//the players as well as actions
//available
//



class player{
  public:
    player();
    ~player();
    bool move(char direction);   //arguments: n, s, e, w
    bool attack(char target);    //arguments: 1 to the number of zombies in the room 
    bool flee(char direction);   //arguments: n, s, e, w
  private:
    int hp;
    char * name;
    int ammo;
    //potential additions
    //gun type
    //infeciton level
};

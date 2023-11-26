#include<iostream>
#include<string.h>
using namespace std;

class Player
{
    int player_id;
    char player_name[20];
    public:
    Player()
    {
        player_id=0;
        strcpy(player_name,"NA");
    }

    Player(int id,const char *name)
    {
        player_id=id;
        strcpy(player_name,name);
    }

    void display()
    {
        cout<<endl<<"Player ID:"<<player_id;
        cout<<"\t Player Name: "<<player_name;
    }

};

class Batsman:public Player
{
  int innings,notout,runs;
  public:
  Batsman()
  {
    innings=notout=runs=0;
  }
  Batsman(int id,const char *name,int inn,int no,int run):Player(id,name)
  {
    innings=inn;
    notout=no;
    runs=run;
  }
   

   void calAvg()
   {
    double avg=runs/(innings-notout);
    cout<<endl<<"\t Avg of Batsman is :"<<avg;
   }
  void display()
  {
    Player::display();
    
        cout<<"\t Innings played : "<<innings;
        cout<<"\t Notout : "<<notout;
        cout<<"\t Runs: "<<runs;
    

  }
}; 

int main()
{
    Player p1;
    p1.display(); 

    Batsman m1(101,"SUMIT",4,2,250);
    m1.display();
    m1.calAvg();


}
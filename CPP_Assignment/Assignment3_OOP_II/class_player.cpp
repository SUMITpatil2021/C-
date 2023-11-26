#include<iostream>
#include<string.h>
using namespace std;
// #include <string>  for getting player name from string 

class Player
{
    int player_id;
    string player_name;
    int run;
    int wicket;
    int inn;

   public:
   Player();
   Player (int , string, int, int, int);
   void accept();
   void display();

};

Player::Player()
{
   
} 
//  while using hardcoded value with string 
// Player :: Player (int a, string b, int c, int d, int e)
// {
//     player_id = a;
//     player_name = b;
//     run = c;
//     wicket = d;
//     inn = e;
// }
void Player::accept()
{
 cout<<endl<<"Enter Player_id,name,runs,wickets,innigs:";
 cin>>player_id>>player_name>>run>>wicket>>inn;

}

void:: Player::display()
{
    cout<<endl<<"Player ID:"<<player_id<<"\t Player Name:"<<player_name<<"\t runs:"<<run<<"\t wickets:"<<wicket<<"\t innings:"<<inn;
} 

int main()
{
    int i;
    // Player p1(1,"sumit",5,6,2); // Using  hardcoded values withstring  
    // p1.display(); 
    Player p1[2] ; // Using accept function  with char crray 
    

    for(i=0;i<2;i++)
    {
        p1[i].accept();
    }
    for(i=0;i<2;i++)
    {
        p1[i].display();
    }
    return 0;
}
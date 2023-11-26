#include<iostream>
using namespace std;

class Box
{
    int height,width,depth;
    public:
    
    void accept(int,int,int);
    void display(); 
    bool  operator<(Box &);
    bool operator>(Box &);
    bool operator==(Box &); 

    int volume()
    {
        int temp= height*width*depth;
        cout<<endl<<"Volume of box is: "<<temp;
        return temp;
    }


};

/**************** Function for accepting values***************/
void Box::accept(int h,int w,int d)
{
    height=h;
    width=w;
    depth=d;
} 

/*****************function for display box*******************/ 

void Box::display()
{
    cout<<endl<<"Height:"<<height<<","<<"width:"<<width<<","<<"depth:"<<depth;
}  

/*************function for overload > ***********************/

bool Box::operator>(Box &o)
{
//  int temp1;

  if(this->volume() > o.volume())
  {
      return true;
  }
  else
  {
    return false;
  }
}
 /*************function for overload < ***********************/

bool Box::operator<(Box &o)
{
//  int temp1;

  if(this->volume() < o.volume())
  {
      return true;
  }
  else
  {
    return false;
  }
}

/*************function for overload == ***********************/
bool Box::operator==(Box &o)
{
//  int temp1;

  if(this->volume() == o.volume())
  {
      return true;
  }
  else
  {
    return false;
  }
}

int main()
{
    Box b1,b2,b3,b4;
    b1.accept(1,2,3);
    b1.display();
    b1.volume();
    
     

    b2.accept(2,3,4);
    b2.display();
    b2.volume(); 
    if (b1>b2)
    {
       cout<<endl<<"b1 is greater than b2 " ; 
    }
    else
    {
        cout<<endl<<"b1 is less than b2";
    }  

    if (b1<b2)
    {
              cout<<endl<<"b2 is greater than b1 " ; 
 
    } 
    else
    {
               cout<<endl<<"b2 is less  than b1 " ; 

    } 

    if(b1==b2)
    {
               cout<<endl<<"b1 is equal to b2 " ; 

    } 
    else
    {
        cout<<endl<<"b1 is not equal to b2";
    }



}
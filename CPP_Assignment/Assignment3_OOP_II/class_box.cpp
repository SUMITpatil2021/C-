#include<iostream>
using namespace std;

class Box
{
 int width,height,depth;
public:
Box();
Box(int,int);
Box(int,int,int);
void display();
int volume();
};

Box::Box()
{
    height=width=depth=2;

}
Box::Box(int h,int d)
{
    height=width=h;
    depth=d;
}
Box::Box(int h,int w,int d)
{
    height=h;
    width=w;
    depth=d;
} 

void Box:: display()
{
    cout<<endl<<"Height,width and depth of box is : "<<height<<","<<width<<","<<depth;
}

int Box::volume()
{
    return height*width*depth;
} 

int main()
{
    int res;
    
     Box b1;
    b1.display();
   res= b1.volume();  
   cout<<endl<<"Volume of box is:"<<res;

   Box b2(2,3);
   b2.display();
   res=b2.volume();
      cout<<endl<<"Volume of box is:"<<res;

   Box b3(1,2,3);
   b3.display();
   res=b3.volume();
      cout<<endl<<"Volume of box is:"<<res;


    

}



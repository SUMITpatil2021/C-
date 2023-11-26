#include<iostream>
using namespace std;
 
 class Box
 {
    int height,width,depth;
    public:
    void display()
    {
        cout<<endl<<"Height,Width and Depth of box is : "<<height<<"\t, "<<width<<"\t,"<<depth;
    }
    void accept(int a,int b,int c)
    {
        height=a;
        width=b;
        depth=c;
        // cout<<endl<<"Height, Width and Depth of box :"<<height<<"\t"<<width<<"\t"<<depth;
    } 
    void volume()
    {
        int temp= height*width*depth;
        cout<<endl<<"Volume of box is: "<<temp;
    }
 }; 

 int main()
 {
    Box b1;
    b1.accept(10,20,30); 
    b1.display();
    b1.volume();
    return 0;
 }
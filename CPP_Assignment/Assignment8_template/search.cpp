#include<iostream>
using namespace std;

template<class T>
bool Search(T arr[],int size,T key)
{
   int i;
   for (i=0;i<size;i++)
   {
    if(arr[i]==key)
    {
        return true;
        break;
    }
   }
   return false;
}

int main()
{
    int arr[]={2,3,4,5,6,7,8,9}; 
    int num,res=0; 
    cout<<endl<<"Enter number to search :";
    cin>>num;
    res=Search(arr,7,num);
    if(res==0)
    {
        cout<<"Number is not found ";
    }
    else
    {
        cout<<"Number is found!!!!";
    }

}
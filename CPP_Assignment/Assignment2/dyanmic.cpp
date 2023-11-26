#include<iostream>
using namespace std;

typedef struct Array
{
    int arr;
    void accept()
    {
        cout<<"\n Enter elements in an array:";
        cin>>arr;
    }
    void display()
    {
        cout<<"\t"<<arr;
    }

}Arr;
   
void max(Arr[],int);
void min(Arr[],int);
void search(Arr[],int);
int even_odd(Arr[],int,int &,int &);

int main()
{
    int arr_size,even=0,odd=0;
    Arr *arrays;
    
    int i;
    cout<<"\n Enter Size of an array:";
    cin>>arr_size;

    arrays= new Arr[arr_size];
    for (i=0;i<arr_size;i++)
    {
        arrays[i].accept();

    } 

    for( i=0;i<arr_size;i++)
    {
        arrays[i].display();
    }  

    search(arrays,arr_size);
    max(arrays,arr_size);
    min(arrays,arr_size);
    even_odd(arrays,arr_size,even,odd);
    cout<<"\n Count of even number is : "<<even<< " and odd numers is: "<<odd;

    
    delete [] arrays;

    // cout<<"\n\n\n";
    return 0;
}   
/***************Max number *************/
  void   max(Arr a[],int size)
  {
    int i,mx=a[0].arr;
    for(i=1;i<size;i++)
    {
        if(a[i].arr>mx)
        {
            mx=a[i].arr;
        } 

    }
    cout<<"\n Max number is: "<<mx;
  } 
/**********************Minimum Number ********************/
  void   min(Arr a[],int size)
  {
    int i,mn=a[0].arr;
    for(i=1;i<size;i++)
    {
        if(a[i].arr<mn)
        {
            mn=a[i].arr;
        } 

    }
    cout<<"\n Min number is: "<<mn;
  } 
  /******* Search element in an array***************/
   void  search(Arr a[],int size)
    {
        int num,i,found=0;
        cout<<"\n Enter an element which is to be search in an array";
        cin>>num;

        for(i=0;i<size;i++)
        {
            if(a[i].arr==num)
            {
                found=1;
                // break;
            }
        }
        if(found==1)
            {
                cout<<"\n number is found!!!";
            }
            else{
                cout<<"\n number is not found.";
            }
        }

    
/***********count of even odd numbers in an array***************/

    int even_odd(Arr a[],int size,int &b, int &c)
    {
        int i,d=0,e=0;
        for(i=0;i<size;i++)
        {
            if(a[i].arr%2==0)
            {
                d++;
            }
            else
            {
                e++;
            }
        }
            b=d;
            c=e;

    } 


    
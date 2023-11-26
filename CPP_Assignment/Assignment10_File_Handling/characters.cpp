#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream f1;
    f1.open("abc.txt",ios::app);
    for(int i=65;i<=90;i++)
    {
        f1.put(char(i));
        f1.put(' ');
    }

}
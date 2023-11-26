#include<stdio.h>

int countchar(char*);
int countspace(char*);
int countvowels(char*);



int main()
{
     int choice,res1,res2,res3;
    char str[40]={"India is my country"};
   

    printf("\n 1.count number of character");
    printf("\n 2.count number of space");
    printf("\n 3.count number of vowels");
    printf("\n Enter choice-");
    scanf("%d",&choice);


    switch (choice)
    {
        case 1:
            // int res1;
             res1=countchar(str);
            printf("Number of character in string are %d",res1);

        break;
     case 2:
            //  int res2;
              res2=countspace(str);
            printf("Number of spaces in string are %d",res2);  
        break;
     case 3:
            //  int res3;
              res3=countvowels(str);
            printf("Number of vowels in string are %d",res3); 
        break;
    
 
    }
}

// Function for count of number of character 
int countchar(char *p)
{
    int cnt=0;
    while(*p!='\0')
    {
        cnt++;
        p++;
    }
    return cnt;
}
// function for count of spaces
int countspace(char *p)
{
    int cnt=0;
    while(*p!='\0')
    {
        if(*p==' ')
        {
            cnt++;
        }
        p++;
    }
    return cnt;
}

// Function for count of number of vowels

int countvowels(char *p)
{
    int cnt=0;
    while(*p!='\0')
    {
        switch (*p)
        {
        case  'A' :
        case  'a':
        case  'E':
        case  'e':
        case  'I':
        case  'i':
        case  'O':
        case  'o':
        case  'U':
        case 'u':
        
        cnt++;
        } 
        
        p++;
       
    }
    return cnt;
}
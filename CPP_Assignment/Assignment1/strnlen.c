#include<stdio.h>

int strlen(char* );
int main()
{
    int len;
    char str[]={"Sumit"};
    len=strlen(str);
    printf("Length of an string is:%d",len);
     return 0;
}

int strlen(char *p)
{
    int cnt=0;
    while(*p!='\0')
    {
        cnt++;
        p++;
    }
    return cnt;
}
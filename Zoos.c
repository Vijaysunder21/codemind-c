#include<stdio.h>
int main()
{
    int i,a=0,b=0;
    char s[100];
    scanf("%s",&s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            a=a+1;
        }
        if(s[i]=='o')
        {
            b=b+1;
        }
    }
    if((2*a)==b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
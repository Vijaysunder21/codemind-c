#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char s[100],a,b;
    int x=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        if(s[0]=='+' || s[2]=='+')
        {
            x=x+1;
        }
        else if(s[0]=='-' || s[2]=='-')
        {
            x=x-1;
        }
    }
    printf("%d",x);
}
    
#include<stdio.h>
int main()
{
    int i,t,n,a,b,k,c,c1,c2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        c=n/a;
        c1=n/b;
        c2=n/(a*b);
        if((c+c1-c2)>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}
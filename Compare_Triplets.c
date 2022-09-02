#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,k,c=0,d=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0;k<3;k++)
    {
        if(a[k]>b[k])
        c=c+1;
        else if(a[k]==b[k])
        continue;
        else
        d=d+1;
    }
    printf("%d %d",c,d);
}
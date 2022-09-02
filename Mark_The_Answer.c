#include<stdio.h>
int main()
{
    int i,a,b,arr[100],c=0,d=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]<=b)
        {
        c=c+1;
        }
        else if(arr[i]>b)
        {
        d=d+1;
        if(d==2)
        break;
        }
    }
    printf("%d",c);
}
#include<stdio.h>
int main()
{
    int i,n,s=0,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        s=s+1;
        if(arr[i]>k)
        s=s+2;
    }
    printf("%d",s);
}
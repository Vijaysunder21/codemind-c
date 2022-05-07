#include<stdio.h>
int main()
{
    int i,j,n,arr[100],f=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            f=1;
            printf("%d ",i);
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==k)
        {
            f=1;
            printf("%d",i);
            break;
        }
    }
    if(f==0)
    printf("-1 -1");
}
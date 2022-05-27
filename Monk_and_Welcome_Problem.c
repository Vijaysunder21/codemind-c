#include<stdio.h>
int main()
{
    int i,arr[100],brr[100],crr[100],n,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]+brr[i]);
    }
}
#include<stdio.h>
int main()
{
    int n,arr[100],k,i,j,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        m=arr[n-1];
        for(j=n-1;j>=0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=m;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
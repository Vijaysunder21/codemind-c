#include<stdio.h>
int main()
{
    int i,n,ec=0,oc=0,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    printf("%d %d",ec,oc);
}
#include<stdio.h>
int main()
{
    int i,j,m,n,a[100],b[100],k,c=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    scanf("%d",&k);
    for(i=0;i<m;i++)
    {
        if(a[i]<=k && b[i]>=k)
        {
            c=c+1;
        }
    }
    printf("%d",c);
    
}
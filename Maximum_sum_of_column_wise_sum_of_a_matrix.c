#include<stdio.h>
int main()
{
    int i,j,n,m,arr[100][100],c[100],s=0,z=0,max;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    z=0;
     for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+arr[i][j];
        }
        c[z++]=s;
    }
    max=c[0];
    for(i=1;i<m;i++)
    {
        if(max<c[i])
        {
            max=c[i];
        }
    }
    printf("%d",max);
}
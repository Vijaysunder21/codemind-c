#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],s=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==m-1 || j==n-1)
            {
                continue;
            }
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}
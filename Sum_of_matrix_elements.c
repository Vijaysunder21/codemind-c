#include<stdio.h>
int main()
{
    int arr[100][100],i,j,r,c,sum=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
  for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum = sum + arr[i][j];
        }
    }
      printf("%d",sum);
    
    return 0;
}

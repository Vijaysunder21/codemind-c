#include<stdio.h>
int main()
{
    int n,i,a[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            if(i%2==0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}
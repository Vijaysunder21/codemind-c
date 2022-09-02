#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
int main()
{
    int i,j,n,a,k,l,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=a;j>=1;j--)
        {
            if(prime(j))
            {
                k=j;
                break;
            }
        }
        l=a+1;
        while(1)
        {
            if(prime(l))
            {
                m=l;
                break;
            }
            l=l+1;
        }
        if(abs(a-k)>abs(a-m))
        {
            printf("%d
",m);
        }
        else
        {
            printf("%d
",k);
        }
    }
}
#include<stdio.h>
int main()
{
    int l,b,w,c,ar1,ar2;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar1=l*b;
    ar2=(l+2*w)*(b+2*w);
    printf("%d",c*(ar2-ar1));
    return 0;
}
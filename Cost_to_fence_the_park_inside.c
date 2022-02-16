#include<stdio.h>
int main()
{
    int l,b,w,c,ar1,ar2;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar1=l*b;
    ar2=(l-2*w)*(b-2*w);
    if(l<=2*w || b<=2*w)
    {
        printf("Impossible");
    }
    else
    printf("%d",c*(ar1-ar2));

    return 0;
}
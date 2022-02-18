#include<stdio.h>
 
int main()
{
    int number,temp,sum=0,d;
 
    scanf("%d",&temp);
 
    number=temp;
 
    while(number!=0)
    {
        d=number%10;
        sum=sum+d;
        number=number/10;
    }
 
    if(temp%sum==0)
        printf("True");
    else
        printf("False");
 
    return 0;
}
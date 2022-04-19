#include<stdio.h>
int main()
{
	int d,n,num,rev=0;
    scanf("%d",&n);
	num=n;	
	while(n)
	{
		d=n%10;
		n=n/10;
		rev = rev*10 + d;
	}
	if(num==rev)
	{
	printf("True");
    }
	else
	{
		printf("False");
	}
return 0;	
}
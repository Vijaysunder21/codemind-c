#include <stdio.h>
int main()
{
	int arr[100],i,j,k,n,s=0;	
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
    	scanf("%d",&arr[i]);
   	}     
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
    		if(arr[i]==arr[j])
    		{
    			for(k=j;k<n;k++)
    			{
    				arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
}
 	for (i=0;i<n;i++)
  	{
 		s=s+arr[i];
  	}
  	printf("%d",s);
 	return 0;
}
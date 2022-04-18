#include<stdio.h> 

int main()
{    
    
    int n,sum = 0,rem;
    scanf("%d",&n);   

    while(n/10 != 0)
    {
        sum = 0;
        while(n!= 0) 
        {
            rem = n% 10;  
            sum += rem; 
            n = n/ 10;  
        }

        n = sum;
    }

    printf("%d", sum);

    return 0;
}
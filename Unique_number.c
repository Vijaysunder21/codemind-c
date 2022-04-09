#include<stdio.h>
int main()
{
 int num,k,temp,f[9],flag=0,i;
 scanf("%d",&num);
 temp=num;
 //By default setting frequency of digits as zero
 for(i=0;i<10;i++)
 {
     f[i]=0;
 }
 while(num>0)
 {
  k=num%10;
  f[k]++;
  num/=10;  
 }
 for(i=0;i<10;i++)
 {
  if(f[i]>1)
  {
   flag=1;
  }
 }
 if(flag==0)
 {
  printf("Unique Number");
 }
 else
 {
  printf("Not Unique Number");
 }
 return 0;
}
#include<stdio.h>
int main()
{
    int i,j,n,c=0;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%s",s);
        for(j=1;s[j]!=NULL;j++)
        {
            if(s[j-1]==s[j])
            {
                c=c+1;
            }
        }
        printf("%d
",c);
    }
}
#include<stdio.h>
#include<string.h>
int main()
{
    int i,m,n;
    char s[100];
    scanf("%[^
]s",s);
    m=0;
    n=strlen(s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='I')
        {
            printf("%d ",m);
            m=m+1;
        }
        else if(s[i]=='D')
        {
            printf("%d ",n);
            n=n-1;
        }
    }
    printf("%d ",m);
}
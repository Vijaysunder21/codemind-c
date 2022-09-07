#include<stdio.h>
int main()
{
    int i,m=0,c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=1;s[i]!=NULL;i++)
    {
        if(s[i-1]==s[i])
        {
            c=c+1;
            if(m>c)
            {
                m=m;
            }
            else
            {
                m=c;
            }
        }
        else
        {
            c=0;
        }
    }
    printf("%d",m+1);
}
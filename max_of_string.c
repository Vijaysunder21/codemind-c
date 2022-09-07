#include<stdio.h>
int main()
{
    int i;
    char s[100];
    scanf("%[^
]s",s);
    char c=s[0];
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>c)
        c=s[i];
    }
    printf("%c",c);
    
}
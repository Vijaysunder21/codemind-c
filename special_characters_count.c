#include <stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int len,c=0,i;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=0;str[i]!=NULL;i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || str[i]==' ')
        {
            c++;
        }
    }
    printf("%d",(len-c));
    return 0;
}
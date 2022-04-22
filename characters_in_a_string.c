#include <stdio.h>
int main()
{
    char str[1000];
    int c=0,i;
    scanf("%[^
]s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
                    c++;
    }
    printf("%d",c);
    return 0;
}
#include<stdio.h>
#include <stdlib.h>
int main()
{
    char s[10000];
    int i, j, count;
    scanf("%s", s);
    for(i=0;i<strlen(s);i+=count)
    {
        count=1;
        for(j=i+1;s[j]==s[i];j++)
        {
            count++;
        }
        printf("%c", s[i]);
        if(count>1)
        {
            printf("%d", count);
        }
    }
}
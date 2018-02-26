#include<stdio.h>
#include <stdlib.h>
int main()
{
    char s[100];
    int n, i;
    scanf("%s %d", s, &n);
    for(i=n%strlen(s);i<strlen(s)+n%strlen(s);i++)
    {
        printf("%c", s[i%strlen(s)]);
    }
}
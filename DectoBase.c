#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i=0, num, base, n[1000];
    scanf("%d %d", &num, &base);
    while(num>0)
    {
        n[i++]=num%base;
        num/=base;
    }
    for(i--;i>=0;i--)
    {
        if(n[i]<10)
        {
            n[i]=n[i]+'0'-'A'+10;
        }
        printf("%c", n[i]+'A'-10);
    }
}
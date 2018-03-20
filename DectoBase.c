#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i=0, num, base, n[1000], newnum=0;
    scanf("%d %d", &num, &base);
    while(num>0)
    {
        n[i++]=num%base;
        num/=base;
    }
    for(i--;i>=0;i--)
    {
        newnum=newnum*10+n[i];
    }
    printf("%d", newnum);
}
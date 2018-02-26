#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long int n, x;
    int count=0;
    scanf("%lld", &n);
    x=n;
    while(x>0)
    {
        count+=x%2;
        x/=2;
    }
    printf("%d", count);
}
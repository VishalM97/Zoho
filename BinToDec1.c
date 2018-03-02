#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long int num;
    int count=0;
    scanf("%lld", &num);
    while(num>0)
    {
        if(num/2!=(float)num/2)
        {
            count++;
        }
        num/=2;
    }
    printf("%d", count);
}

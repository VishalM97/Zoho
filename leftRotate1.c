#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long int num, result=0;
    int rot, i, k=0, a[20];
    scanf("%lld %d", &num, &rot);
    while(num>0)
    {
        a[k++]=num%10;
        num/=10;
    }
    for(i=rot;i<k+rot;i++)
    {
        result=result*10+a[abs(i%k-k+1)];
    }
    printf("%lld", result);
}   
#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long int num;
    int rot, i, j, k=0, a[20];
    scanf("%lld %d", &num, &rot);
    while(num>0)
    {
        a[k++]=num%10;
        num/=10;
    }
    for(i=rot%k;i<k+rot%k;i++)
        printf("%d", a[abs(i%k-k+1)]);
}
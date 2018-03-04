#include<stdio.h>
#include <stdlib.h>
int main()
{
    int arr[1000], n=-1, i, j, count;
    while(scanf("%d", &arr[++n])!=-1)
        ;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        {
            for(j=i+1, count=1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
            }
            printf("%d --> %d\n", arr[i], count);
        }
    }
}
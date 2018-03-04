#include<stdio.h>
#include <stdlib.h>
int main()
{
    int arr[1000][2], n=0, i, j, count;
    while(scanf("%d", &arr[n][0])!=-1)
    {    
        arr[n++][1]=0;
    }
    for(i=0;i<n;i++)
    {
        if(!arr[i][1])
        {
            for(j=i+1, count=1;j<n;j++)
            {
                if(arr[i][0]==arr[j][0])
                {
                    count++;
                    arr[j][1]=1;
                }
            }
            printf("%d --> %d\n", arr[i][0], count);
        }
    }
}
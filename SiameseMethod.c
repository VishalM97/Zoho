#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n, a[100][100], i, j, k=1;
    scanf("%d", &n);
    if(n%2==0||n<0)
    {
        printf("Enter an odd positive integer");
        return 0;
    }
    for(i=0, j=n/2;k<=n*n;k++)
    {
        a[i][j]=k;
        if(a[(n+i-1)%n][(n+j+1)%n]!=0)
        {
            while(a[i][j]!=0)
            {
                i++;
            }
        }
        else
        {
            i=(n+i-1)%n;
            j=(n+j+1)%n;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
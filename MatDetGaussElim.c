#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    float det=1, mat[n][n], num;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            for(k=0, num=mat[i][j]/mat[j][j];k<n;k++)
            {
                mat[i][k]=mat[i][k]-num*mat[j][k];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        det*=mat[i][i];
    }
    printf("%.0f", det);
}
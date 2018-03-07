#include<stdio.h>
#include <stdlib.h>
int main()
{
    char n[100][100], t[100];
    int i, j, k=0;
    while(scanf("%s", n[k])!=-1)
    {
        if(n[k][0]=='0')
        {
            for(i=0;n[k][i]=='0';i++);
            if(i==strlen(n[k]))
            {
                n[k][1]='\0';
            }
            else
            {
                for(j=0;j<strlen(n[k])-i;j++)
                {
                    n[k][j]=n[k][j+i];
                }
                n[k][j]='\0';
            }
        }
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(strlen(n[i])>strlen(n[j])||(strcmp(n[i], n[j])>0&&strlen(n[i])==strlen(n[j])))
            {
                strcpy(t, n[i]);
                strcpy(n[i], n[j]);
                strcpy(n[j], t);
            }
        }
        printf("%s ", n[i]);
    }
}
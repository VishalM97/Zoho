#include<stdio.h>
#include <stdlib.h>
int isRep(char str[], int i)
{
    int r=strlen(str);
    for(;i<strlen(str);i++)
    {
        for(int k=i+1;k<strlen(str);k++)
        {
            if(str[i]>=str[k])
            {
                if(k<r)
                    r=k;
                break;
            }
        }
    }
    return r;
}
void dispString(char str[], int i, int j)
{
    for(;i<j;i++)
    {
        printf("%c", str[i]);
    }
}
void uniq(char str[])
{
    int max=0, resi, resj;
    for(int i=0;i<strlen(str);i++)
    {
        if(isRep(str, i)-i>max)
        {
            resi=i;
            resj=isRep(str, i);
            max=resj-i;
        }
    }
    dispString(str, resi, resj);
}
int main()
{
    char str[100];
    scanf("%s", str);
    uniq(str);
}
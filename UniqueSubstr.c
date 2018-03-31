#include<stdio.h>
#include <stdlib.h>
int isRep(char str[], int i)
{
    for(;i<strlen(str);i++)
    {
        for(int k=i+1;k<strlen(str);k++)
        {
            if(str[i]==str[k])
            {
                return k;
            }
        }
    }
    return strlen(str);
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
    for(;resi<resj;resi++)
    {
        printf("%c", str[resi]);
    }
}
int main()
{
    char str[100];
    scanf("%s", str);
    uniq(str);
}
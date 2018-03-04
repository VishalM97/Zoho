#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i, vcount[]={0, 0, 0, 0, 0};
    char s[1000], vowel[]="aeiou";
    fgets(s, 1000, stdin);
    for(i=0;i<strlen(s);i++)
    {
        char c=tolower(s[i]);
        if(c=='a')
            vcount[0]++;
        else if(c=='e')
            vcount[1]++;
        else if(c=='i')
            vcount[2]++;
        else if(c=='o')
            vcount[3]++;
        else if(c=='u')
            vcount[4]++;
    }
    for(i=0;i<5;i++)
    {
        if(vcount[i]!=0)
        {
            printf("%c --> %d\n", vowel[i], vcount[i]);
        }
    }
}
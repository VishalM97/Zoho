#include<stdio.h>
#include <stdlib.h>
int main()
{
    int arr_element, x, i=0;
    scanf("%d", &x);
    while(scanf("%d", &arr_element)!=-1)
    {
        if(arr_element==x)
        {
            printf("%d", i);
            return 0;
        }
        i++;
    }
    printf("-1");
}
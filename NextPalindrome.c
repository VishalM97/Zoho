#include<stdio.h>
int isPalindrome(int num)
{
    int rev=0, temp=num;
    while(temp)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(num==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int nextPalindrome(int num)
{
    for(++num;!isPalindrome(num);num++);
    return num;
}
int main()
{ 
    int num;
    scanf("%d", &num);
    printf("%d", nextPalindrome(num));
}
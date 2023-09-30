#include<stdio.h>

    int main()
{
    int num,rem,rev=0,temp;
    temp=num;
    scanf("%d",num)
    while (num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*num+10;
    }
    if(temp==num)
    {
    printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
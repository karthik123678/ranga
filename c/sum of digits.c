#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    scanf("%d",&num);
    printf("enter the five digit integer");
    sum+=num%10;
    sum+=(num/10)%10;
    sum+=(num/100)%10;
    sum+=(num/1000)%10;
    sum+=(num/10000)%10;
    printf("sum of the digits%d",sum);
}
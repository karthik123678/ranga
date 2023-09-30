#include<stdio.h>
int sum();
int main()
{
printf("%d",sum());
}
int sum()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int sum=num1+num2;
    return sum;
}
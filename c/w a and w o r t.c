#include<stdio.h>
void sum();
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    sum(num1,num2);
}
void sum (int apple,int ball)

{
    int sum=apple+ball;
    printf("%d",sum);
}
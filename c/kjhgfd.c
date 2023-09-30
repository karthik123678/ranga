#include<stdio.h>
int sum(int,int);
int main()
{
    int num1, num2;
    scanf("%d%d",&num1,&num2);
    printf("%d",sum(num1,num2));
}
        int sum(int n1,int n2)
        {
            int sum=n1+n2 ;
            return sum;
        }
    

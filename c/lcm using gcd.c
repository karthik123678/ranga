#include<stdio.h>
int main()
{
    int num1,num2,gcd,itr;
    scanf("%d%d",num1,num2);
    for(itr=1;itr<=num1;itr++)
    if(num1%itr==0&&num2%itr==0)
    gcd=itr;
    printf("%d",(num1*num2)/gcd);
}
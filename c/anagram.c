#include<stdio.h>
#include<math.h>
int main() 
{
   int num1,num2,digit,sum1=0,sum2=0;
   scanf("%d%d",&num1,&num2);
   while(num1)
   {
      digit=num1%10;
      sum1=sum1+pow(10,digit);
      num1=num1/10;
   }
   while(num2)
   {
      digit=num2%10;
      sum2=sum2+pow(10,digit);
      num2=num2/10;
   }
   if(sum1==sum2)
      printf("Anagram");
   else
       printf("Not an Anagram");   
}

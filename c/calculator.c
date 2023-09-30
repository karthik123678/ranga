#include<stdio.h>
int main()
{
int a,b,add,sub,multi,modulus;
float divi,square;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
add=a+b;
sub=a-b;
multi=a*b;
divi=(float)a/b;
modulus=a%b;
square=a^b;
printf("\nadd:%d",add);
printf("\nsub:%d",sub);
printf("\nmulti:%d",multi);
printf("\ndivi:%d",divi);
printf("\nmodulus:%d",modulus);
printf("\nsquare:%d",square);
return 0;
}

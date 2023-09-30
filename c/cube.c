#include<stdio.h>
int main()
{
    float side,volume ;
    printf("enter the length of the side:");
    scanf("%f",side);
    volume= side*side*side;
    printf("the volume of the cube is:%f\n",volume);
    return 0;
 }
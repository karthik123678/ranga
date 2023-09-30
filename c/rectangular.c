#include<stdio.h>
int main()
{
    float length,breadth,height,volume;
    printf("enter the length of the box:");
    scanf("%gf",&length);
    printf("enter the breadth of the box:");
    scanf("%gf",&breadth);
    printf("enter the height of the box:");
    scanf("%gf",&height);
    volume=length*height*breadth;
    printf("the volume of the rectangular box:%f.2f\n",volume);

}
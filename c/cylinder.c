#include<stdio.h>
#define PI 3.14159
int main()
{
    float radius,height,area,volume;
    printf("enter the radius of the cylinder:");
    scanf("%f",&radius);
    printf("enter the height of the cylinder:");
    scanf("%f",&height);
    area = 2*PI*radius*(radius+height);
    volume= 2*PI*radius*radius;
    printf("enter the area of the cylinder:%f",area);
    printf("enter the volume of the cylinder:%f",volume);
}
#include<stdio.h>
#define PI 3.14159
int main()
{
    float radius,circumference;
    printf("Enter the radius:");
    scanf("%f",&radius);
    circumference=2*PI*radius;
    printf("circumference of the circle:%.2f\n",circumference);
}
#include<stdio.h>
#define PI 3.14159
int main()
{
    float radius,circumference;
    printf("enter the radius of the circle:" );
    scanf("%f",radius);
    circumference=2*PI*radius;
    printf("the circumference of the circle is:%.2f\n",circumference);
    return 0;
}
#include<stdio.h>
int main()
{
    float length,breadth,height,volume;
    scanf("%f",&length);
    printf("enter a length of the box: ");
    scanf("%f",&breadth);
    printf("enter a breadth of the box: ");
    scanf("%f",&height);
    printf("enter a height of the box: ");
    volume=length*breadth*height;
    printf("the volum of the rectangular box is:%.2f\n",volume);
    return 0;
}
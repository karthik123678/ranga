#include<stdio.h>
int main()
{
    int ageIndays,years,months,days;
    printf("enter the number of age in days");
    scanf("%d",&ageIndays);
    years= ageIndays/365;
    ageIndays%=365;
    months=ageIndays/30;
    ageIndays%=30;
    days=ageIndays;
    printf("age:,%dyears,%dmonths,%ddays\n",years,months,days);
    return 0;
}
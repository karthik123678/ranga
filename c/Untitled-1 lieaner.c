#include<stdio.h>
int main()
    {
        int size,sum=0,aveg=0;
        scanf("%d",&size);
        int arr[size];
        for(int itr=0;itr<size;itr++)
        {
            scanf("%d",&arr[itr]);
            sum=sum+arr[itr];
        }
        aveg=sum/size;
        printf("%f",aveg);
    }

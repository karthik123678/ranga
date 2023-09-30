#include<stdio.h>
int main()
 {
    int size,ele,flage;
    scanf("%d",&size);
    int arr[size];
    for(int itr=0;itr<size;itr++)
    {
        scanf("%d",&arr[itr]);
    }
    scanf("%d",&ele);
    for(int itr=0;itr<size;itr++)
    {
        if(arr[itr]==ele)
        {
            flage=1;
            break;
        }

    }
    if (flage==1)
    {
        printf("element found");
    }
    else
       printf("not element");
 }
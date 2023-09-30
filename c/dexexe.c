#include<stdio.h>
int main()
    {
        int size,ones,zero=0;
        scanf("%d",&size);
        int arr[size];
        for(int itr=0;itr<size;itr++)
        {
            scanf("%d",&arr[itr]);
            if(arr[itr]==1)
              ones++;
            if(arr[itr]==0)
              zero++;
        }
        printf("zc=%d\n",zero);
        printf("oc=%d\n",ones);
    }

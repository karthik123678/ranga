#include <stdio.h>
int main()
{
	int Size, i, sum = 0;

	printf("Please Enter the Array size = ");
	scanf("%d", &Size);

	int arr[Size];

	int *parr = arr;

	printf("Enter the Array Items = ");
	for (i = 0; i < Size; i++)
	{
		scanf("%d", parr + i);
	}

	for (i = 0; i < Size; i++)
	{
		sum = sum + *(parr + i);
	}

	float avg = (float)sum / Size;

	printf("the Sum of Array Items     = %d", sum);
	printf("The Average of Array Items = %f", avg);
}



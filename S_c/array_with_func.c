#include <stdio.h>

void printArray(int arr[])
{
	int i;
	
	printf("Array Elements: ");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10] = { 12, 4, 5, 3, 7, 8, 11, 45, 1, 22 };
	printArray(arr);

	return 0;
}


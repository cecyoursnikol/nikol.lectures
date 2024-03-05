#include<stdio.h>

int main()
{
	
	int i,j,n;
	
	printf("Enter any no. :");
	scanf("%i",&n);	
	
	for(i = 1;i <= n;i++)   //rows
	{
		for(j = 1; j <= i; j++)   //columns
		{
			printf("*");
		}
		
		printf("\n");
	}	
	return 0;
}

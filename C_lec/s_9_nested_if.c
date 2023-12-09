//nested if
#include<stdio.h>
int main()
{
	int weight,product;
	printf("Product list\n");
	printf("1.wheat\n2.rice\n");
	
	printf("Enter ur choise :");
	scanf("%d",&product);
	if(product==1)
	{
		printf("U Have go for wheat not select quantity,\n1.500gm\n2.1000gm");
		printf("\nEnter ur choise :");
		scanf("%d",&weight);
		
		if(weight==1 || weight ==2)
		{
			printf("Ur order is placed");
		}
		else
		{
			printf("ghar ja");
		}
	}
	else if(product==2)
	{
		printf("U Have go for rice not select quantity,\n1.500gm\n2.1000gm");
		printf("\nEnter ur choise :");
		scanf("%d",&weight);
		
		if(weight==1 || weight==2)
		{
			printf("Ur order is placed");
		}
		else
		{
			printf("ghar ja");
		}
	}
	else
	{
		printf("Invalid");
	}
}

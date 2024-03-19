#include<stdio.h>
#include<string.h>
union ram
{
	int money;
	char name[50];
}d1;


int main()
{
	int n,i;
	
	printf("Enter the value :- ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the name :- ");
		scanf("%s",d1.name);
		
		printf("Enter the money :- ");
		scanf("%d",&d1.money);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Enter the name :- ");
		printf("%s",d1.name);
		
		printf("Enter the money :- ");
		printf("%d",d1.money);
	}
	
	
}

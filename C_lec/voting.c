#include<stdio.h>
int main()
{
	int gender,age;
	printf("1.Male\n");
	printf("2.Female\n");
	printf("Press any number for other\n");
	scanf("%d",&gender);
	
	
	if
	(gender==1)
	{
		printf("You are male\n");
		printf("enter age: ");
		scanf("%d",&age);
		
		if
		(age>18)
		{
			printf("You are eligible for voting");
		}
		else
		{
			printf("You are  not eligiable for vote");
		}
	}
	else if
	(gender==2)
	{
		printf("You are female\n");
		printf("enter age: ");
		scanf("%d",&age);
		
		if(age>18)
		{
			printf("You are eligible for voting");
		}
		else
		{
			printf("You are not eligiable for vote");
		}
	}
	else
	{
		printf("enter age: ");
		scanf("%d",&age);
	
		if
		(age>18)
		{
			printf("You are eligible for voting");
		}
		else
		{
			printf("You are not eligiable for vote");
		}
	}
	return 0;
}

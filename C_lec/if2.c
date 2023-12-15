#include<stdio.h>
int main()
{
	printf("1.Male\n");
	printf("2.Female\n");
	printf("press any number for other");
	
	int num,age;
	scanf("%d",&num);
	
	if
	(num==1)
	{
		printf("You are male\n");
		printf("Enter your age");
		scanf("%d",&age);
		if
		(age>18)
		{
			printf("You are eligible for voting");
		}
		else
		{
			printf("Error");
		}
	}
	else if
	(num\==2)
	{
		printf("You are female\n");
		printf("Enter your age");
		scanf("%d",&age);
		if
		(age>18)
		{
			printf("You are eligible for vote");
		}
		else
		{
			printf("Error");
		}
	}
	else
	{
		printf("You are transgender\n");
		printf("Enter your age");
		scanf("%d",&age);
		if
		(age>18)
		{
			printf("You are eligible for vote");
		}
		else
		{
			printf("Error");
		}
	}
	return 0;
}

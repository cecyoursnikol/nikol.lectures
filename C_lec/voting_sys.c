#include <stdio.h>
int main()
{
	int num, age;
	
	printf("press 1 for male \n");
	printf("press 2 for female\n");
	printf("press any for other\n");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("you are male\n");
		printf("enter age : ");
		scanf("%d",&age);
		
		if(age>18)
		{
			printf("yor are eligiable for vote");
		}
		else
		{
			printf("your are not eligiable for vote");
		}
	}
	else if(num==2)
	{
		printf("you are female\n");
		printf("enter your age : ");
		scanf("%d",&age);
		if(age>18)
		{
			printf("you can VOTE");
		}
		else
		{
			printf("you can NOT vote");
		}
	}
	else
	{
		printf("enter your age : ");
		scanf("%d",&age);
		if(age>18)
		{
			printf("you can VOTE");
		}
		else
		{
			printf("you can NOT vote");
		}
	}
	
	
	return 0;
}

#include<stdio.h>
int main()
{
	int gender,age;
	
	printf("Select a Gender\n1.male\n2.Female\nEither any number for other  :");
	scanf("%d",&gender);
	
	if(gender==1)
	{
		printf("U selected Male \n now enter ur Age :");
		scanf("%d",&age);
		if(age>18)
		{
			printf("U are eligible for Voting");
		}
		else
		{
			printf("U are under age");
		}
	}
	else if(gender==2)
	{
		printf("U selected Female");
	    scanf("%d",&age);
		if(age>15)
		{
			printf("U are eligible for Voting");
		}
		else
		{
			printf("U are under age");
		}
	}
	else
	{
		printf("U selected other");
	    scanf("%d",&age);
		if(age>20)
		{
			printf("U are eligible for Voting");
		}
		else
		{
			printf("U are under age");
		}
	}
}

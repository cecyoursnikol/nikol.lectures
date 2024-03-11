#include<stdio.h>

int main()
{
	int age;
	char gender;
	
	printf("Voting System\n\n\n");
	
	printf("Enter ur gender :");
	scanf("%c",&gender);
	
	if(gender == 'm')
	{
		
		printf("U are male\nNow Enter ur age :");
		scanf("%d",&age);
		if(age >=21){
			printf("U are eligible to vote ");
		}
		else{
			printf("U are under 21");
		}
	}
	else 
	{
		
		printf("U are Female\nnNow Enter ur age :");
		scanf("%d",&age);
		if(age>=18){
			printf("U are eligible to vote");		
		}
		else{
			printf("U are under 18");
		}
		
	}
	
	return 0;
	
}

#include<stdio.h>

int main(){
	
	char gender;
	int age;
	
	printf("enter ur gender :");
	scanf("%c",&gender);
	
	if(gender == 'm' || gender == 'f'){
		
		printf("Ur gender is %c",gender);
		
		printf("\nNow enter ur age :");
		scanf("%d",&age);
		
		if(age>18)
		{
			printf("U are eligible to vote..");
		}
		else
		{
			printf("Sorry beta school jao...");
		}
	}
	
	else
	{
		printf("trans gender is not allowed");
	}
	
	
	return 0;
}

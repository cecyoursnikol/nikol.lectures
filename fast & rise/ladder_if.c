#include<stdio.h>
int main()
{
	int day;
	
	printf("Enter the number of day:");
	scanf("%d",&day);
	
	if(day == 1)
		printf("Monday");
	
	else if(day == 2)
		printf("tuesday");
	
	else if(day == 3)
		printf("Wednesday");
		
	else if(day == 4)
		printf("Thursday");
	
	else if(day == 5)
		printf("friday");
		
	else if(day == 6)
		printf("saturday");
		
	else if(day == 7)
		printf("Sunday");
		
	else
		printf("Sorry but i am talking about India..");

	return 0;
}

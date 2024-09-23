#include<stdio.h>

int main(){
	
	
	int day;
	
	printf("Enter the number of day :");
	scanf("%d",&day);
	
	
	switch(day){
		
		case 1:
			{
				printf("Sunday");
				break;
			}
		
		case 2:{
			printf("Monday");
			break;
		}
			
		default:{
			printf("wrong input");
			break;
		}
	}
	return 0;
}

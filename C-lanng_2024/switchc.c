#include<stdio.h>
int main(){
	
	int day;
	
	printf("Enter the number of day :");
	scanf("%d",&day);
	
	switch(day){
		case 1:{
			printf("Sunday");
			break;
		}
		case 2:{
			printf("MOnday");
			break;
		}
		case 3:{
			printf("Tuesday");
			break;
		}
		case 4:{
			printf("Wednesday");
			break;
		}
		case 5:{
			printf("THursday");
			break;
		}
		case 6:{
			printf("Friday");
			break;
		}
		case 7:{
			printf("Saturday");
			break;
		}
		
		default:{
			printf("Error");
			break;
		}
	}
	return 0;
}

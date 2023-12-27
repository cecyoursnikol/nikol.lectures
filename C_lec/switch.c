#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the value as u Think :");
	scanf("%d",&num);
	
	switch (num){
	case 10:
		{
		
			printf("U have inserted 10");
			break;	
		}
	case 20:
		{
			printf("U have inserted 20 ");		
			break;	
		}
	case 30:
		{
			printf("U have inderted 30");
			break;
		}
		default:{
			printf("Pls enter any number only");
			break;
		}
	
	}
	return 0;
}

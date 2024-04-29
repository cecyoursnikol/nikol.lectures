#include<stdio.h>

int main(){
	
	
	int num;
	
	printf("Enter the value above 10 :");
	scanf("%d",&num);
	
	
	if(num > 10)
	{
		printf("Correct ur value is %d",num);
	}
	else{
		printf("Oops incorrect !");
	}
	
	return 0;
}

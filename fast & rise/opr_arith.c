#include<stdio.h>

int main(){
	
	int num1, num2, result;
	
	printf("Enter two values :");
	scanf("%d %d",&num1,&num2);
	
	
	printf("Ur values are %i %i",num1,num2);
	
	result = num1 + num2; //condition
	
	printf("\nThe add is %d",result);
	return 0;
}

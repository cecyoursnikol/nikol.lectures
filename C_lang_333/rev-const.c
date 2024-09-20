#include<stdio.h>

int main(){
	
	int num = 90;
	
	const float pi = 3.14;
	
	
	printf("%d",num);
	
	num = 67;
	
	printf("Updated value :%d",num);
	
	printf("\nThe Value is %f",pi);
	
	pi = 5.34;
	
printf("\nThe Value is %f",pi);
	
	return 0;
}

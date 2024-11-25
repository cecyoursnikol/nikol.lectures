#include<stdio.h>

int main(){
	
	
	int a,b;
	
	
	a = 51, b = 20;
	
//	Logical And
	printf("And %d",a>50 && a > b);
	
//	logical or
	printf("\nOr %d",a < b || a > b);
	
//	Logical Not
	printf("Not %d",!(a == b));

	
	
	return 0;
}

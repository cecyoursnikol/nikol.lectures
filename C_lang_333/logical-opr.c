#include<stdio.h>

int main(){
	
	
	int num, num1;
	
	num = 150;
	num1 = 19;
	printf("Logical and : %d",num >=num1 && num <= 150);
	
//	logical or ||

	printf("\nLogical || : %d",num <= 65 || num>=19);
	
	
//	logical not

	printf("\nLogical Not : %d",!(num == 150));
	return 0;	
}

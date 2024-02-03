#include<stdio.h>

int main(){
	int num1 = 30;
	int num2 = 20;
	
	printf("number 1 is %d\nNumber 2 is %d",num1,num2);
	
	printf("\nLogical and :%d",num1>=30 && num1>num2);  //logical and
	
	printf("\nLogical or :%d",num1>100 || num1>num2);  //logical or
	
	printf("\nlogical not :%d",!(num1>8));	
	
	return 0;
}

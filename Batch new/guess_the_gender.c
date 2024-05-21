#include<stdio.h>

int main(){
	
	char gender;
	
	printf("Enter 'm' either 'f' :");
	scanf("%c",&gender);
	
	printf("The gender is %c ur ans %d",gender,gender=='m' || gender =='f');
	
	return 0;
}

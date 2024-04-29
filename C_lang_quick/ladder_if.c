#include<stdio.h>

int main(){
	
	char gender;
	
	printf("Enter ur Gender :");
	scanf("%c",&gender);
	
	if(gender == 'm'){
		
		printf("Ur gender is Male");
	}
	else if(gender == 'f'){
		printf("ur gender is female");
	}
	else{
		printf("U are not allowed");
	}
	
	return 0;
}

#include<stdio.h>

int main(){
	
	char gender;
	
	printf("Enter ur gender :");
	scanf("%c",&gender);
	
	
	if(gender == 'm'){
		
		printf("Ur gedner is Male");
	}
	
	else if(gender == 'f'){
		
		printf("Ur gedner is Female");
	}
	else{
		printf("Others----");
	}
	
	
	return 0;
}

//ladder if
#include<stdio.h>

int main(){
	
	char gender;
	
	printf("Enter ur Gender :");
	scanf("%c",&gender);
	
	if(gender == 'm'){  // firsr cond
		
		printf("Ur gender is Male");
	}
	else if(gender == 'f'){   //second cond
		printf("ur gender is female");
	}
	else{
		printf("U are not allowed");
	}
	
	return 0;
}

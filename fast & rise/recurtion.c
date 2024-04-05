#include<stdio.h>

int NegNum(){
	
	int num;
	
	printf("Enter any negative number :");
	scanf("%d",&num);
	
	if(num<0){
		printf("U Entered correct ur number is %d",num);
	}
	else{
		
		printf("\nWarning! Read statment:");
		NegNum();
	}
	
	return 0;
}


int main(){
	
	NegNum();
	
	return 0;
	
}

#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter a value above 100 :");
	scanf("%d",&num);
	
	if(num>100){
		
		printf("Nice! ur value is %d",num);
		
	}
	else{
		
		printf("Oops! error");
	}
		
	return 0;
}

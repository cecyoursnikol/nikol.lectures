#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter the value more than 20 :");
	scanf("%d",&num);
	
	
	
	if(num>20){
		printf("U are correct the value is %d",num);
	}	
	else{
		printf("sorry check again");
	}
	return 0;
}

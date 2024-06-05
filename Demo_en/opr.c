#include<stdio.h>

	int add(int x,int y){
		
		printf("The add is %d",x+y);
		return 0;
	}
	
	int sub(int x, int y){
		
		printf("The sub is %d",x-y);
		return  0;
	}


int main(){
	
	int num , num1,n;
	
	printf("What u want to do \n1.Add\n2.sub\n");
	printf("Enter ur choice :");
	scanf("%d",&n);
	
	if(n == 1){
		printf("Now enter two values :");
		scanf("%d %d",&num, &num1);
		
		add(num,num1);
	}
	
	else if(n == 2){
		printf("Now enter two values :");
		scanf("%d %d",&num, &num1);
		
		sub(num,num1);
	}
	
	else{
		
		printf("Error!");
	}
	
	
	
	
	return 0;
}

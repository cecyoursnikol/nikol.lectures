#include<stdio.h>

int func(){
	
	int a;
	
	printf("\nEnter the value in a :");
	scanf("%d",&a);
	
	printf("Ur value is %d",a);
	return 0;	
}

int main(){
	
	int i;
	
	for(i = 0;i < 10; i++){
		
	func();	
	}
	
	
	
	return 0;
}
